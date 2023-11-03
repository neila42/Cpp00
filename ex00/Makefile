NAME		= megaphone
C++FLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJ			= $(SRC:.cpp=.o)

SRC =	megaphone.cpp \

#HEADER = megaphone.hpp \

all:	$(NAME)

%.o : %.cpp #$(HEADER)
	g++ -c -o $@ $< $(C++FLAGS)
	
$(NAME):	$(OBJ) 
			g++ $(C++FLAGS) -o $(NAME) $(OBJ)


clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
