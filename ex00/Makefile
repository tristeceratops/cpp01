NAME := BraiiiiiiinnnzzzZ
FLAGS := -Wall -Wextra -Werror -std=c++98
FILES := Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
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