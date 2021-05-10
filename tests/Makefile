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

$(NAME) : $(OBJS)
	make -C $(LIBDIR)
	$(CC) $(CFLAGS) -I./includes -L $(LIBDIR) $(LIBUNIT_DIR) -o $@ $^ -lft

clean :
	make clean -C $(LIBDIR)
	rm -f $(OBJS)

fclean : clean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
