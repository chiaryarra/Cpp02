NAME = bsp

CPP = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)