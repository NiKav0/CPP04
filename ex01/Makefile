NAME = Animalv2.0
CXX = c++ -Wall -Wextra -Werror -std=c++98
SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
