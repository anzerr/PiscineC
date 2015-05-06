CC = gcc
NAME = aff_up
SRC = main.c my_aff_up_params.c

OBJ = $(SRC:%.c=%.o)
RM = rm -f

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all :	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all