NAME = libftprintf.a

LIBFT = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ./libft

SRCS = ft_printhex_upper.c ft_putunsigned.c ft_printf.c ft_printhex_lower.c ft_putptr.c

OBJS=$(SRCS:.c=.o)
%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

all : $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	ar rsc $(NAME) $(OBJS)
	cp $(LIBFT_DIR)/$(LIBFT) $(NAME)

$(LIBFT):
	make -C ./libft

clean :
	rm -f ${OBJS}
	make -C $(LIBFT_DIR) clean

fclean : clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re : fclean all
