NAME    = libftprintf.a

# Test
TEST    = test_program

SRCS    = ./srcs/ft_printf.c \
          ./srcs/pf_letters.c

OBJS    = $(SRCS:.c=.o)

TEST_SRC = test/main.c

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
test: $(TEST)

$(TEST): $(NAME) $(TEST_SRC)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_SRC) -L. -lftprintf

# Nettoyage
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all

.PHONY: all clean fclean re test

