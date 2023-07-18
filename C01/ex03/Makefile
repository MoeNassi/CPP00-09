NAME = Human

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = main.cpp weapon.cpp HumanA.cpp HumanB.cpp

HEADER = weapon.hpp HumanA.hpp HumanB.hpp

OBJ=$(SRC:.cpp=.o)

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
