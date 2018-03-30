CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = ex03
SRC =	srcs/main.cpp\
		srcs/ClapTrap.cpp\
		srcs/FragTrap.cpp\
		srcs/ScavTrap.cpp\
		srcs/NinjaTrap.cpp\

OBJ = $(SRC:.cpp=.opp)
INCL = -I includes/

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) -lncurses $(FLAGS) -o $(NAME) $(OBJ) $(INCL)

%.opp: %.cpp
	$(CC) $(FLAGS) -o $@ -c $< $(INCL)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
