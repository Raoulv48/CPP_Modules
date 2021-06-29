NAME = Karen

SRC = main.cpp Karen.cpp

OBJS = $(SRC:.cpp=.o)

$(NAME): all

all: $(OBJS)
	clang++ -o $(NAME) $(OBJS) -Wall -Werror -Wextra -std=c++98 -pedantic

%.o: %.cpp
	clang++ -o $@ -c $< -Wall -Werror -Wextra -std=c++98 -pedantic

clean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all Karen 