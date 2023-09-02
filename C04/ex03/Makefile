NAME = Go_Crazy

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = AMateria.cpp main.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp 
OBJ = $(SRC:.cpp=.o)

HEADER = AMateria.cpp Ice.hpp Cure.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp 

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