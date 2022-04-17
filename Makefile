##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## HEADER
##

SRCF = src/

SRC =	$(SRCF)buble_linked.c	\
		$(SRCF)error.c			\
		$(SRCF)swap_linked.c	\
		$(SRCF)tools.c			\

SRCT =	tests/test_project.c	\

OBJ =	$(SRC:.c=.o)
OBJT =	$(SRCT:.c=.o)

NAME =	push_swap
CRITERION = unit_tests

CFLAGS = -I./include -L./lib/my -lmy

CRIT = --coverage -lcriterion
VALGRIND = -g3

ARGUMENTS = 5 4 3 2 1

all:	$(NAME)

$(NAME):	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) main.c $(CFLAGS)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a

exe:		$(NAME)
			clear
			./$(NAME) $(ARGUMENTS)

valgrind:	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $(CFLAGS) $(VALGRIND)
			rm -f $(OBJ)
			clear
			valgrind ./$(NAME) $(ARGUMENTS)

clean:
	rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../lib/my/libmy.a
		rm -f lib/my/libmy.a

re: fclean all

test_run:	$(OBJT)
			make -C ./lib/my
			gcc -o $(CRITERION) $(OBJ) $(OBJT) $(CFLAGS) $(CRIT)
			rm -f $(OBJ)
			rm -f $(OBJT)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a
			./$(CRITERION)
