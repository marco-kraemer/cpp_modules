# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 08:32:31 by maraurel          #+#    #+#              #
#    Updated: 2021/08/04 10:59:56 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

CC = clang++

CFLAGS = #-Wall -Wextra -Werror

SRCS = main.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	AMateria.cpp \
	MateriaSource.cpp


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
