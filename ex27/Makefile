NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = \
	./src/ft_display_file.c \
	./src/main.c \
	./src/puts.c

OBJECTS = \
	./ft_display_file.o \
	./main.o \
	./puts.o

INCLUDES = \
	./includes/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(INCLUDES) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) -I $(INCLUDES) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -r $(NAME)

re: fclean all