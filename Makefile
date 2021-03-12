##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make
##

SRC	=	src/my_window.c	\
		src/my_textures.c	\
		src/main.c	\
		src/my_event.c	\
		src/my_duck.c	\
		src/my_utils.c	\
		src/my_text.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I include -Wpedantic

NAME	=	my_hunter

all:	$(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) $(CFLAGS) -o $(NAME) -g -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio -lcsfml-network -lm -lncurses

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
