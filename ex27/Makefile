# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selly <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 17:56:26 by selly             #+#    #+#              #
#    Updated: 2019/04/04 14:47:56 by selly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
