NAME = FragTrap

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = FragTrap.cpp main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = FragTrap.hpp ClapTrap.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re