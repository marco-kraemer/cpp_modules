# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/30 09:42:09 by maraurel          #+#    #+#              #
#    Updated: 2021/08/02 11:32:48 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $^

clean:
	@$(RM) -r $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

git: 
	git add .
	git commit -m "update"
	git push origin main
