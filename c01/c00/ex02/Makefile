# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 07:49:56 by maraurel          #+#    #+#              #
#    Updated: 2021/07/19 13:43:14 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC_PATH = ./src

OBJ_PATH = ./obj

SRC = $(notdir $(wildcard ./src/*.cpp))

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC:.cpp=.o))

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.cpp
	@$(CC) -g $(FLAGS) -c $< -o $@

fclean: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(OBJ_PATH)/*.o

re: fclean all
