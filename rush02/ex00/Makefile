CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iincludes
OBJECTS=srcs/main.o \
		srcs/ft_read_dict.o \
		srcs/ft_util.o \
		srcs/ft_util_strcmp.o \
		srcs/ft_parse.o \
		srcs/ft_dict2.o \
		srcs/ft_dict.o \
		srcs/ft_translate.o
NAME=rush-02

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
