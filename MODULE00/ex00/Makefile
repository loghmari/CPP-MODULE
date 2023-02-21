# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 12:13:49 by sloghmar          #+#    #+#              #
#    Updated: 2023/01/02 12:33:52 by sloghmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp \

NAME = megaphone

++ = g++

OBJS_SRC = $(SRC:.cpp=.o)


OBJS = $(OBJS_SRC)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(++) $(OBJS_SRC) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS_SRC)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
