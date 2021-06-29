NAME = replace

SRCS = SedIsForLosers.cpp main.cpp

CC = clang++

FLAGS = -Wall -Werror -Wextra

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $(OBJS) $(FLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $^ $(FLAGS)

clean:
	rm $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: clean
	./replace test1 test lol
	./replace test2 Ajax AJAX
