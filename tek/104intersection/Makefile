SRC	=	src/usage.c	\
		src/main.c    \
		src/104intersection.c   \
		src/negative.c    \
		src/delta_null.c  \
		src/positive.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-lm 

RM	=	rm -f

NAME	=	104intersection

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
