# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 09:33:35 by maraurel          #+#    #+#              #
#    Updated: 2021/08/10 09:59:49 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	span.cpp

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
