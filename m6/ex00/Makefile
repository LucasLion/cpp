# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/09/01 16:55:29 by llion@student    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= scalar_converter
CC   	= c++
CXXFLAGS= -ggdb3 -Wall -Wextra -Werror -std=c++98 -Wshadow
RM		= rm -f
SRC		= main.cpp ScalarConverter.cpp
TEST	= tests.cpp ScalarConverter.cpp 
TOBJ	= $(TEST:.cpp=.o)
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)
	make clean

run: $(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)
	make clean
	@./$(NAME)

leaks: $(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)
	make clean
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

debug: $(OBJ)
	$(CC) $(CXXFLAGS) -fsanitize=address -o $(NAME) $(OBJ)
	make clean
	@./$(NAME)

test: $(TOBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(TOBJ)
	make clean
	@./$(NAME)

clean:
	$(RM) $(OBJ) $(TOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run debug
