# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sloghmar <sloghmar@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 22:28:42 by sloghmar          #+#    #+#              #
#    Updated: 2023/01/10 22:52:26 by sloghmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF	= "\033[0m"       
RED			= "\033[0;31m"
YELLOW		= "\033[0;33m" 

NAME = zombieHorde

CXX	= @ clang++

SRC = main.cpp Zombie.cpp zombieHorde.cpp

CXXFLAGS = -Wall -Wextra -Werror 

OBJ := ${SRC:.cpp=.o}

%.o: %.c
	@ $(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

title:
	@ echo $(RED)"| ============================================================| "$(COLOR_OFF)
	@ echo $(RED)"| ---------   ______   |\        /| |----\    @  _________    | "$(COLOR_OFF)
	@ echo $(RED)"| ------ /   /  ____ \ |  \    /  | | |_| |  | | |  ______|   | "$(COLOR_OFF)
	@ echo $(RED)"|     / /   | |    | | ||\  \/  /|| | _ _ /  | | |  |___      | "$(COLOR_OFF)
	@ echo $(RED)"|    / /    | |    | | ||  \__/  || |  __ \  | | |   ___|     | "$(COLOR_OFF)
	@ echo $(RED)"|   / /     | |    | | ||        || | |  | | | | |  |         | "$(COLOR_OFF)
	@ echo $(RED)"|  / /_____ | |____| | ||        || | |__| | | | |  |_____    | "$(COLOR_OFF)
	@ echo $(RED)"| /_______/ \_______/  ||        || |_____/  | | |________|   | "$(COLOR_OFF)
	@ echo $(RED)"| ============================================================| "$(COLOR_OFF)
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