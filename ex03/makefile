# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymarival <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 23:43:51 by ymarival          #+#    #+#              #
#    Updated: 2023/07/06 23:43:51 by ymarival         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS =  main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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