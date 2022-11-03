SRCS =
OBJS = ${SRCS:.c=.o}
INC = includes
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBC = ar rc
LIBR = ranlib

.c.o: #%.o : %.c                                                                
        ${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

all: ${NAME}

${NAME}: ${OBJS}
        ${LIBC} ${NAME} ${OBJS}
        ${LIBR} ${NAME}
