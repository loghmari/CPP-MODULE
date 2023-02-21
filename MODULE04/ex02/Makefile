# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 11:21:30 by sloghmar          #+#    #+#              #
#    Updated: 2023/02/07 11:28:42 by sloghmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF	= "\033[0m"       
RED			= "\033[0;31m"
YELLOW		= "\033[0;33m" 

NAME = animal

CXX	= @ clang++

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

OBJ := ${SRC:.cpp=.o}

%.o: %.c
	@ $(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

title:
	@ echo $(RED)" ================================================ "$(COLOR_OFF)
	@ echo $(RED)" 	   		ANIMAL							 "$(COLOR_OFF)
	@ echo $(RED)" ================================================ "$(COLOR_OFF)
	@ echo 

$(NAME): $(OBJ)
	@ make title
	@ $(CXX) $(OBJ) -o $@
	@ echo $(YELLOW)"⚒ make completed."$(COLOR_OFF)

clean: 
	@ rm -f ${OBJ}
	@ echo $(YELLOW)"⚒ clean completed."$(COLOR_OFF)

fclean: clean 
	@ rm -f $(NAME)
	@ rm -f ${OBJ}
	@ rm -dir -f *.dSYM
	@ find . -name ".DS_Store" -delete
	@ echo $(YELLOW)"⚒ fclean completed."$(COLOR_OFF)

re: fclean all

.PHONY: all clean fclean re 