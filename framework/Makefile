NAME = libunit.a
SRCDIR = ./srcs/
SRCS = $(shell cd $(SRCDIR) && echo *.c && cd ..)
OBJDIR = ./objs/
OBJS = $(SRCS:%.c=$(OBJDIR)%.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(OBJDIR) $(NAME)

$(OBJDIR) :
	mkdir -p objs

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
#	ranlib $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
