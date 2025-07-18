# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsegura <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 17:55:23 by lsegura           #+#    #+#              #
#    Updated: 2024/08/04 18:14:23 by lsegura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = main.c utils.c

all: $(NAME)

$(NAME): $(FILES) header.h
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

