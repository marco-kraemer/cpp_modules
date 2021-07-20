# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 10:04:44 by maraurel          #+#    #+#              #
#    Updated: 2021/07/20 10:46:36 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = weapon

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	humanA.cpp \
	humanB.cpp \
	Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	@$(CC) $(CFLAGS) -o $(OBJS) -c $(SRCS)

clean:
	@$(RM) -r $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

git: 
	git add .
	git commit -m "update"
	git push origin main
