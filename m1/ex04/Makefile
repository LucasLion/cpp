# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/07/14 16:09:08 by llion@student    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedFile
CC   = c++
CXXFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
RM   = rm -f
SRC = main.cpp

OBJ  = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $<

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
