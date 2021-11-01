# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 15:25:44 by itkimura          #+#    #+#              #
#    Updated: 2021/10/29 16:25:00 by itkimura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc -Wall -Wextra -Werror
SRCS = display_file.c
NAME = ft_display_file

all:$(NAME)

$(NAME):
	$(GCC) $(SRCS) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
