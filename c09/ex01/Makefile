# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sachouam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 17:33:15 by sachouam          #+#    #+#              #
#    Updated: 2019/07/25 17:22:17 by sachouam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= 	libft.a

SRCS 			= 	srcs/ft_putchar.c \
	   				srcs/ft_putstr.c \
	   				srcs/ft_strcmp.c \
	   				srcs/ft_strlen.c \
	   				srcs/ft_swap.c \

OBJECTS 		= 	${SRCS:.c=.o}

HEADERS_FOLDER 	= 	includes

CFLAGS 			= 	-Wall -Wextra -Werror

.c.o:
				gcc ${CFLAGS} -I${HEADERS_FOLDER} -c $< -o ${<:.c=.o}

all: 			${NAME}

${NAME}:    	${OBJECTS}
				ar rc ${NAME} $(OBJECTS)

clean:
	        	rm -f $(OBJECTS)

fclean:			clean
	        	rm -f libft.a

re:         	fclean all
