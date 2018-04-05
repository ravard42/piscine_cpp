CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = ft_retro
SRC =	srcs/main.cpp\
		srcs/GameEntity.cpp\
		srcs/Player.cpp\
		srcs/Horde.cpp\
		srcs/Ennemy.cpp\
		srcs/Missiles.cpp\
		srcs/Missile.cpp\

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
