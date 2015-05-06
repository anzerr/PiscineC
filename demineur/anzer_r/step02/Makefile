SRC =	core/readline.c \
	core/main.c \
	core/gamelogic.c \
	core/score.c

NAME =	demineur
OBJO =	$(SRC:%.c=%.o)
OBJC =	$(SRC)

all:	$(NAME)

$(NAME):	$(OBJO)
	gcc -W -Werror -Wall $(OBJO) -o $(NAME) -L. -lmy

clean:
	rm -f $(OBJO)
fclean:		clean
	rm -f $(NAME)

re:	fclean all
