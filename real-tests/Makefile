NAME = unit_realtest
UNITDIR = ../framework/
LIBFTDIR = ./libft/

# add1
SRCDIR0 = ./main/
SRCDIR1 = ./ft_strlen/
SRCDIR2 = ./ft_atoi/
SRCDIR3 = ./ft_memmove/
SRCDIR4 = ./ft_strtrim/

# add2
SRCDIR  = $(SRCDIR0)
SRCDIR += $(SRCDIR1)
SRCDIR += $(SRCDIR2)
SRCDIR += $(SRCDIR3)
SRCDIR += $(SRCDIR4)

# add3
SRCS  = $(shell cd $(SRCDIR0) && echo *.c && cd ..)
SRCS += $(shell cd $(SRCDIR1) && echo *.c && cd ..)
SRCS += $(shell cd $(SRCDIR2) && echo *.c && cd ..)
SRCS += $(shell cd $(SRCDIR3) && echo *.c && cd ..)
SRCS += $(shell cd $(SRCDIR4) && echo *.c && cd ..)

OBJDIR = ./objs/
OBJS = $(SRCS:%.c=$(OBJDIR)%.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(OBJDIR) $(NAME)

$(OBJDIR) :
	mkdir -p objs

# add4
$(OBJDIR)%.o : $(SRCDIR0)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(OBJDIR)%.o : $(SRCDIR1)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(OBJDIR)%.o : $(SRCDIR2)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(OBJDIR)%.o : $(SRCDIR3)%.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(OBJDIR)%.o : $(SRCDIR4)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# -L<libdir> -l<lib-unit cut lib>
$(NAME) : $(OBJS)
	make -C $(UNITDIR)
	make -C $(LIBFTDIR)
	$(CC) $(CFLAGS) -I./includes -L$(LIBFTDIR) -L$(UNITDIR) -o $@ $^ -lunit -lft

clean :
	rm -f $(OBJS)

fclean : clean
	make fclean -C $(UNITDIR)
	make fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re : fclean all

# ret(-1) cause make error.  ||: force ret(0)
test : all
	./$(NAME)||:

bonus : all

.PHONY: all fclean clean re test bonus
