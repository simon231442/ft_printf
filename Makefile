NAME    = libftprintf.a

# Test
TEST    = test_program
PRINTF	= PRINTF
TEST_PLUS = PLUS

SRCS    = ./srcs/ft_printf.c \
          ./srcs/pf_letters.c \
	  ./srcs/pf_numbers.c \

OBJS    = $(SRCS:.c=.o)

TEST_SRC = test/main.c
PRINTF_SRC = test/main_printf.c
TEST_PLUS_SRC = test/main_plus.c

CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror -I includes

# Compilation de la bibliothèque
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Génération de l'exécutable de test
test: $(TEST) $(PRINTF)

$(TEST): $(NAME) $(TEST_SRC) $(PRINTF_SRC) $(TEST_PLUS_SRC)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_SRC) -L. -lftprintf
	$(CC) $(CFLAGS) -o $(PRINTF) $(PRINTF_SRC) -L. -lftprintf
	$(CC) $(CFLAGS) -o $(TEST_PLUS) $(TEST_PLUS_SRC) -L. -lftprintf

# Nettoyage
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(TEST) $(PRINTF) $(TEST_PLUS)

re: fclean all

.PHONY: all clean fclean re test

