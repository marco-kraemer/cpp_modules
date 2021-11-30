# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 11:24:57 by maraurel          #+#    #+#              #
#    Updated: 2021/11/30 11:24:58 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	Base.cpp \
	a.cpp \
	b.cpp \
	c.cpp

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
