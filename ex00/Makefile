NAME = megaphone

CC	= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC = Megaphone.cpp\

SRCS	= $(SRC)
OBJ		= $(SRC:.cpp=.o)
OBJS	= $(OBJ)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
