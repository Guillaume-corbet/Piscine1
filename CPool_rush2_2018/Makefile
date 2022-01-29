##
## EPITECH PROJECT, 2018
## rush2
## File description:
## Makefile
##

SRC		=		step03.c

OBJ		=		$(SRC:.c=.o)

NAME		=		rush2

all:	$(NAME) clean

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -Llib/my/. -lmy

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:
	fclean $(NAME)

auteur:
		echo $(USER) > auteur
