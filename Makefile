##
## EPITECH PROJECT, 2024
## makefile
## File description:
## root makefile
##

CC ?= gcc

SRC =	src/main.c				\
		src/add.c				\
		src/del.c				\
		src/disp.c				\
		src/sort.c				\
		src/list_len.c			\
		src/print_linked_list.c	\
		src/merge_with_pivot.c	\

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra

CPPFLAGS += -iquote include

NAME = interactive_linked_list

all:	crlib	cmp

crlib:
	make -C lib/my/

cmp:	$(OBJ)
	gcc -o $(NAME) $(CPPFLAGS) $(CFLAGS) $(OBJ) -L lib/ -lmy -lshell

clean:
	$(RM) $(OBJ)
	make -C lib/my/ clean

fclean:	clean
	$(RM) lib/libmy.a
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean cmp crlib functionnal_tests
