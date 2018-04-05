CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = ex01
SRC =	iter.cpp\

OBJ = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.opp: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
