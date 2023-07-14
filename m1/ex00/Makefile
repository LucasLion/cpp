# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/07/14 15:57:53 by llion@student    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC   = c++
CXXFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
RM   = rm -f
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ  = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

debug: $(OBJ)
	$(CC) $(CXXFLAGS) -fsanitize=address -o $(NAME) $(OBJ)

run:
	@./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
