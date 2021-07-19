# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 07:49:56 by maraurel          #+#    #+#              #
#    Updated: 2021/07/19 12:51:21 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRC = Account.cpp \
	tests.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRC)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)	

clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all
