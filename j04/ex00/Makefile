CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = ex00
SRC =	srcs/main.cpp\
		srcs/Character.cpp\
		srcs/Sorcerer.cpp\
		srcs/Victim.cpp\
		srcs/Peon.cpp\

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
