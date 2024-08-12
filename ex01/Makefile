NAME := MoreBrainzzz
FLAGS := -Wall -Wextra -Werror -std=c++98
FILES := Zombie.cpp main.cpp zombieHorde.cpp
OBJ := $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all