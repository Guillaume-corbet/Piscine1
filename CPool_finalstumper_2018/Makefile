##
## EPITECH PROJECT, 2018
## Infin_add
## File description:
## Makefile
##

SRC		=	rush3.c		\
			rush1_1.c		\
			rush1_2.c		\
			rush1_3.c		\
			rush1_4.c		\
			rush1_5.c		\
			my_strlen_rush.c

OBJ		=	$(SRC:.c=.o)

NAME	=	rush3

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
