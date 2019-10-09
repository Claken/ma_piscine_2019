# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sachouam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 17:33:15 by sachouam          #+#    #+#              #
#    Updated: 2019/07/25 17:56:32 by sachouam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES     	=	fonctions.c operateurs.c main.c

NAME    	=	do-op

CC      	= 	gcc

RM      	=   rm -f

OBJ     	=   ${FILES:.c=.o}

CFLAGS  	=   -Wall -Wextra -Werror

.c.o:   
	    	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${OBJ}
	    	${CC} -o ${NAME} ${OBJ}

all:    	${NAME}

clean:
	    	${RM} ${OBJ}

fclean:     clean
	    	${RM} ${NAME}

re:         fclean all
