SRC =	main.c

NAME =	do-op
OBJO =	$(SRC:%.c=%.o)
OBJC =	$(SRC)

all:	$(NAME)

$(NAME):	$(OBJO)
		gcc $(OBJO) -o $(NAME) -L. -lmy
clean:
	rm -f $(OBJO)
fclean:		clean
	rm -f $(NAME)

re:	fclean all
