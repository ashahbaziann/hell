NAME = push_swap

BONUS = bonus

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -I ./include

SRCS = \
srcs/validation.c \
srcs/utils.c \
srcs/ft_split.c \
srcs/get_index.c \
srcs/list_operations.c \
srcs/main_algorithm.c \
srcs/math_related.c \
srcs/operations.c \
srcs/rotate_operations.c \
srcs/sort.c \
srcs/tiny_sort.c \
gnl/get_next_line.c \
gnl/get_next_line_utils.c \

BONUS_SRCS = checker.c \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) push_swap.o include/push_swap.h Makefile
	cc $(CFLAGS) $(OBJS) push_swap.c  -o $(NAME)

$(BONUS): $(BONUS_OBJS) $(OBJS) include/push_swap.h Makefile
	cc $(CFLAGS) $(BONUS_OBJS) $(OBJS) -o $(BONUS)

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS) push_swap.o

re: fclean all

.PHONY: all clean fclean re
