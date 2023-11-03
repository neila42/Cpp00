NAME		= Phonebook
C++FLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJ			= $(SRC:.cpp=.o)

SRC =	Contact.cpp \
		Phonebook.cpp \
		main.cpp \

HEADER =	Contact.hpp \
			Phonebook.hpp \

all:	$(NAME)

%.o : %.cpp $(HEADER)
	g++ -c -o $@ $< $(C++FLAGS)
	
$(NAME):	$(OBJ) 
			g++ $(C++FLAGS) -o $(NAME) $(OBJ)


clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
