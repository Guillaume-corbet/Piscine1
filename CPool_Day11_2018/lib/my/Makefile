##
## EPITECH PROJECT, 2018
## Day11
## File description:
## task01
##

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME) clean

$(NAME):	$(OBJ)
		ar rc libmy.a *.o

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

auteur:
	echo $(USER) > auteur
