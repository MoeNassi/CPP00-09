NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = phonebook.cpp contacts.cpp Main.cpp

HEADER = phonebook.hpp contacts.hpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
