# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/06/18 20:13:32 by llion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
CC   = c++
CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
RM   = rm -f
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ  = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

debug: $(OBJ)
	$(CC) $(CFLAGS) -fsanitize=address -o $(NAME) $(OBJ)

run:
	@./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
