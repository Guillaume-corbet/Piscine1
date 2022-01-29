##
## EPITECH PROJECT, 2018
## Day10
## File description:
## task02
##

SRC    =    main.c
			my_getnbr.c

OBJ    =	$(SRC:.c=.o)

NAME    =    test

all:    $(NAME) clean

$(NAME):    $(OBJ)
		gcc -o $(NAME) $(OBJ) -L../lib/my. -lmy 

clean:
	 	rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:
	fclean $(NAME)

auteur:
		echo $(USER) > auteur
