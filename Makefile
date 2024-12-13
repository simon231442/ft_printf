NAME    = libftprintf.a

#test
TEST	= test_program

SRCS    = ./srcs/ft_printf.c \
          ./srcs/pf_letters.c

OBJS    = $(SRCS:.c=.o)


TEST_SRC = test/main.c


CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror -I includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#test
test: $(TEST)

	$(TEST): $(NAME) $(TEST_SRC)
		$(CC) $(CFLAGS) -o $(TEST) $(TEST_SRC) -L. -lftprintf


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
