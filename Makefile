# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppreez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/19 17:54:50 by ppreez            #+#    #+#              #
#    Updated: 2018/06/22 10:58:26 by ppreez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pee.filler

FILES = filler.c

COMPILE = gcc -Wall -Werror -Wextra -I.

OBJS = $(FILES:%.c=%.o)

MAP ?= 0

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) -o $(NAME) $(FILES) ./libft/libft.a

$(OBJS): $(FILES)
	$(COMPILE) -c $(FILES)

clean:
	/bin/rm $(OBJS)

fclean: clean
	/bin/rm $(NAME)

re: fclean all

play: $(NAME)
	./resources/filler_vm -f ./resources/maps/map0$(MAP) -p2 ./resources/players/abanlin.filler -p1 ./$(NAME)
