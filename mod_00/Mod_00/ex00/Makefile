SRC =	megaphone.cpp

NAME =	megaphone

FLAGS =	-Wall -Werror -Wextra

CC =	clang++

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:	-rm - f *.0

fclean:	clean
		-rm -f $(NAME)

re:		fclean