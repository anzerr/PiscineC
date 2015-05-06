CC =	gcc
NAME =	test
SRC =	test.c
OBJ = 	$(SRC:%.c=%.o)
RM =	rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all