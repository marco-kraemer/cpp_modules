# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 11:05:15 by maraurel          #+#    #+#              #
#    Updated: 2021/11/30 11:05:16 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	Convert.cpp

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
