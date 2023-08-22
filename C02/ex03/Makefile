NAME = Fixed

CPP = c++

CFLAGS = -Wall -Wextra -Werror

SRC = Fixed.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Fixed.hpp

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