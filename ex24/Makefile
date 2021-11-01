# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 14:40:13 by itkimura          #+#    #+#              #
#    Updated: 2021/10/29 14:55:40 by itkimura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/*.c
HEADER = ./includes/
NAME = libft.a
OBJS = *.o

all:$(NAME)

$(NAME):
	gcc -c $(SRCS) -c -I $(HEADER)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	make clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
