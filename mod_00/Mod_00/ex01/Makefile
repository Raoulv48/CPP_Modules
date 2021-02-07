NAME = phonebook

SRCS = main.cpp contact.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ -o $@ $^ -Wall -Werror -Wextra -std=c++98

%.o: %.cpp
	clang++ -o $@ -c $^ -Wall -Werror -Wextra -std=c++98

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
