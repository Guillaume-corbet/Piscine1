##
## EPITECH PROJECT, 2018
## Evalexpr
## File description:
## Makefile
##

SRC		=	number.c		\
			signe.c			\
			summands.c		

NAME	=	summands

all:	clean $(NAME)

$(NAME):
		(cd ./lib/my/ && make)
		gcc -o $(NAME) $(SRC) -Llib/my/. -lmy


clean:
		rm -f $(NAME)

fclean:
		rm -f $(NAME)

re:
		fclean $(NAME)

auteur:
		echo $(USER) > auteur
