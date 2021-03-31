SRCS = ft_atoi.c main.c ft_putnbr.c operations.c
OBJS = ${SRCS:.c=.o}
INCL = includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op

.c.o:
		${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	clean all fclean re
