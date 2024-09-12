PROG	= push_swap

SRCS 	= check_arg.c cost.c position.c push_swap_utility.c push_swap_utility2.c sort_tiny.c sort.c main.c cost2.c cost3.c print.c push_utils3.c sort_tiny2.c
OBJS 	= ${SRCS:.c=.o}
MAIN	= main.c

HEADER	= -Iinclude

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -g

.c.o:		%.o : %.c
					@gcc ${CFLAGS} ${HEADER} -c $< -o $(<:.c=.o)

all: 		${PROG}

${PROG}:	${OBJS}
					@echo "\033[33m----Compiling lib----"
					@make re -C ./Libft
					@make re -C ./printf
					@$(CC) ${OBJS} -LLibft -lft -Lprintf -lprintf -o ${PROG}
					@echo "\033[32mPush Swap Compiled!\n"

clean:
					@make clean -C ./Libft
					@rm -f ${OBJS} ${OBJS_B}

fclean: 	clean
					@make fclean -C ./Libft
					@rm -f $(NAME)
					@rm -f ${PROG}
					@echo "\n\033[31mDeleting EVERYTHING!\n"

re:			fclean all

.PHONY: all clean fclean re
