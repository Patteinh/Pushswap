##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	libmy.a

CPPFLAGS	=	-I ./include/ -W -Wall -Wextra

OBJ			=	$(SRC:.c=.o)

SRC     =	my_strlen.c		\
			my_putnbr.c		\
			my_getnbr.c		\

all :	$(NAME)
$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY:	all clean fclean re
