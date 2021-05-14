NAME = unit_realtest
UNITDIR = ../framework/

# add1
SRCDIR1 = ./ft_strlen/
SRCDIR2 = ./ft_strcmp/
UTIL    = ./utils/

# add2
SRCDIR  = $(SRCDIR1)
SRCDIR += $(SRCDIR2)
SRCDIR += $(UTIL)

# add3
SRCS  = $(shell cd $(SRCDIR1) && echo *.c && cd ..)
SRCS += $(shell cd $(SRCDIR2) && echo *.c && cd ..)
SRCS += $(shell cd $(UTIL) && echo *.c && cd ..)

OBJDIR = ./objs/
OBJS = $(SRCS:%.c=$(OBJDIR)%.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(OBJDIR) $(NAME)

$(OBJDIR) :
	mkdir -p objs

# add4
$(OBJDIR)%.o : $(SRCDIR1)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(OBJDIR)%.o : $(SRCDIR2)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(OBJDIR)%.o : $(UTIL)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# -L<libdir> -l<lib-unit cut lib>
$(NAME) : $(OBJS)
	make -C $(UNITDIR)
	$(CC) $(CFLAGS) -I./includes -L$(UNITDIR) -o $@ $^ -lunit

clean :
	rm -f $(OBJS)

fclean : clean
	make fclean -C $(UNITDIR)
	rm -f $(NAME)

re : fclean all

# ret(-1) cause make error.  ||: force ret(0)
test : all
	./$(NAME)||:

.PHONY: all fclean clean re test
