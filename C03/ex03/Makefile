NAME = DiamondTrap

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = DiamondTrap.cpp FragTrap.cpp main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = FragTrap.hpp ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp

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