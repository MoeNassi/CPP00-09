NAME=Phonebook

CFLAGS=-Wall -Wextra -Werror

CPP = c++

SRC = phonebook.cpp

OBJ=$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
