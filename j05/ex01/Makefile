CC = g++
FLAGS = -Wall -Wextra -Werror
NAME = ex01
SRC =	srcs/main.cpp\
		srcs/Bureaucrat.cpp\
		srcs/Form.cpp\

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
