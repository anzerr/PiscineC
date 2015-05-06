SRC =	core/main.c \
	core/core.c \
	core/list.c \
	core/cmd.c \
	core/readline.c \
	core/action.c \
	core/words.c \
	core/cmp.c \
	core/misc.c \
	core/term.c \
	core/data.c

NAME =	dicowesh
OBJO =	$(SRC:%.c=%.o)
OBJC =	$(SRC)
CFLAGS = -W -Werror -Wall

all:	$(NAME)

$(NAME):	$(OBJO)
	gcc -W -Werror -Wall $(OBJO) -o $(NAME) -L. -lmy

clean:
	rm -f $(OBJO)
fclean:		clean
	rm -f $(NAME)

re:	fclean all
