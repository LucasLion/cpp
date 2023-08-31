# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/08/31 13:55:47 by llion@student    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bureaucrat
CC   		= c++
CXXFLAGS	= -ggdb3 -Wall -Wextra -Werror -std=c++98 -Wshadow
RM			= rm -f
SRC			= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJ			= $(SRC:.cpp=.o)

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

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run debug
