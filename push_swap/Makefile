NAME = push_swap

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

SRCS = operations.c push_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) push_swap.h Makefile
	cc $(CFLAGS) $(OBJS) -o $(NAME)
# ar rc $(NAME) $(OBJS)

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
