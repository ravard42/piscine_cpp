CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = logger
SRC =	srcs/main.cpp\
		srcs/Logger.cpp\

OBJ = $(SRC:.cpp=.opp)
INCL = -I includes/

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INCL)

%.opp: %.cpp
	$(CC) $(FLAGS) -o $@ -c $< $(INCL)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
