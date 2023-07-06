# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 01:09:23 by llion             #+#    #+#              #
#    Updated: 2023/07/06 10:11:16 by llion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl 
CC   = c++
CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
RM   = rm -f
SRC = main.cpp Harl.cpp

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
