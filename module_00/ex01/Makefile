# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/06/15 09:11:23 by llion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC   = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I include
RM   = rm -f
SRC  = src/PhoneBook.cpp	\
	   src/Contact.cpp		\
	   src/main.cpp

OBJ  = $(addprefix obj/,$(notdir $(SRC:.cpp=.o)))

all: $(NAME)

obj/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

run:
	@./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
