NAME = claptrap

SRCS = main.cpp ClapTrap.cpp  

CC   = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

OUT  = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OUT)
	@$(CC) $(FLAGS) $(OUT) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@
clean:
	@rm -rf $(OUT)

fclean: clean
	@rm -f $(NAME)

re: fclean all