##
## EPITECH PROJECT, 2018
## Infin_add
## File description:
## Makefile
##

SRC		=	main.c

OBJ		=	$(SRC:.c=.o)

NAME	=	infin_add

all:	$(NAME) clean

$(NAME):	$(OBJ)
		(cd ./lib/my/ && make)
		gcc -o $(NAME) $(OBJ) -Llib/my/. -lmy


clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:
		fclean $(NAME)

auteur:
		echo $(USER) > auteur
