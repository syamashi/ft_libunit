NAME = test
SRCDIR = ./ft_strlen/
SRCNAMES = $(shell echo *.c)
SRCS = $(addprefix $(SRCDIR), $(SRCNAMES))
OBJDIR = ./obj/

OBJS = $(SRCNAMES:%.c=$(OBJDIR)%.o)

LIBDIR = ../real-tests/libft

LIBUNIT_DIR = ../framework/

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(OBJDIR) $(NAME)

$(OBJDIR) :
	mkdir -p obj

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : clean
	gcc -c ../framework/src/*.c
	ar rc libunit.a ./*.o
	gcc ft_strlen/*.c ft_strlen/*.h ./*.a -o $(NAME)

clean :
	rm -f $(NAME)
	rm -f libunit.a
	rm -f ../framework/libunit.a
#clean :
#	make clean -C $(LIBDIR)
#	rm -f $(OBJS)

fclean : clean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
