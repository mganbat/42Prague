NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
	  ft_libftutils.c \
	  ft_printfutils.c

SRCS_BONUS = 

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
	ar rcs $(NAME) $@ 

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	cc -nostartfiles -shared -o libft.so $(OBJS) $(SRCS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all bonus clean fclean re
