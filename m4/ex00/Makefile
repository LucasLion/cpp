# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/07/16 18:38:09 by llion@student    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animals
CC   	= c++
CXXFLAGS= -ggdb3 -Wall -Wextra -Werror -std=c++98 -Wshadow
RM		= rm -f
SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

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

.PHONY: all clean fclean re run debug
