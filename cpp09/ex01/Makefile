NAME = RPN

SRC =  main.cpp  RPN.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -f


all: $(NAME)

$(NAME): $(OBJ) 
	 $(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)


clean:
	 $(RM) $(OBJ)

fclean: clean
	 $(RM) $(NAME)

re: fclean $(NAME)