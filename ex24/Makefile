NAME = libft.a
CC = gcc
FLAG = -Wall -Wextra -Werror

HEADER = includes/

SRCS = \
	ft_putchar.c\
	ft_putstr.c\
	ft_strcmp.c\
	ft_strlen.c\
	ft_swap.c\

SRC_DIRECTORY = srcs/

SRC_FINAL = $(addprefix $(SRC_DIRECTORY),$(SRCS))

OBJECTS = $(SRC_FINAL:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re