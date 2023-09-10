NAME = ClapTrap

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = ClapTrap.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CPP) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re