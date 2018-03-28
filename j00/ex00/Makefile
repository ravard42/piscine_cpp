CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = megaphone
SRC =	megaphone.cpp\

OBJ = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

%.opp: %.cpp
	$(CC) -o $@ -c $< $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
