NAME = unit_test
UNITDIR = ../framework/
SRCDIR1 = ./ft_strlen/
SRCDIR2 = ./ft_strcmp/
UTIL    = ./utils/

SRCDIR  = $(SRCDIR1)
SRCDIR += $(SRCDIR2)
SRCDIR += $(UTIL)

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

bonus : all

.PHONY: all fclean clean re test bonus
