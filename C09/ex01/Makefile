SRC_DIR = srcs
INC_DIR = includes

SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c 
OBJ_FILES = $(SRC_FILES:.c=.o)

SRCS = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR)/,$(OBJ_FILES))
LIBC = ar rc
LIBR = ranlib
NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ -I ${INC_DIR}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all:    ${NAME}


clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
