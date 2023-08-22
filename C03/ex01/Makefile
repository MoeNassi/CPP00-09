NAME = ScavTrap

CPP = c++

CFLAGS = -Wall -Wextra -Werror

SRC = ScavTrap.cpp main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = ScavTrap.hpp ClapTrap.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re