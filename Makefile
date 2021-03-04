##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile c file
##

SRCC = ./src/

SRC	=	$(SRCC)main.c	\
		$(SRCC)torus.c	\
		$(SRCC)argument_recognition.c	\
		$(SRCC)error_recognition.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

LDFLAGS	=	-lm -Llib/my/ -lmy

NAME	=	105torus

all:	$(NAME)

$(NAME):	 $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
