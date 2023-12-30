# Nom du programme
NAME = libftprintf.a
TEST_NAME = test

# Compiler et flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft -Iprintf

# Dossiers
MANAGED_DIR = managed/
PRINTF_DIR = printf/
UTILITY_DIR = utility/
BONUS_DIR = bonus/

# Fichiers sources et objets
SRCS = $(PRINTF_DIR)ft_printf.c \
       $(MANAGED_DIR)c_manage.c \
       $(MANAGED_DIR)d_manage.c \
       $(MANAGED_DIR)i_manage.c \
       $(MANAGED_DIR)p_manage.c \
       $(MANAGED_DIR)percent_manage.c \
       $(MANAGED_DIR)s_manage.c \
       $(MANAGED_DIR)u_manage.c \
       $(MANAGED_DIR)X_manage.c \
       $(MANAGED_DIR)x_manage.c \
       $(UTILITY_DIR)dectohex.c \
       $(UTILITY_DIR)put_adress.c \
       $(UTILITY_DIR)put_unbr.c

OBJS = $(SRCS:.c=.o)

# Fichiers sources et objets pour les bonus
BONUS_SRCS = $(BONUS_DIR)bonus_format_option.c \
             $(BONUS_DIR)bonus_format_space.c \
             $(BONUS_DIR)bonus_format_zero.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Libft
LIBFT = libft
LIBFT_LIB = libft.a
FT_PRINTF = printf

# Règles de base
all: $(NAME)

$(NAME): $(OBJS) libft.a
	ar -rcs $(NAME) $(OBJS)

# Règle pour libft.a
libft.a:
	make -C $(LIBFT)
	cp $(LIBFT)/$(LIBFT_LIB) .


# Règle pour tester
test: $(OBJS) test.o libft.a libftprintf.a
	gcc -o test test.o $(OBJS) -L. -lftprintf -lft


$(TEST_NAME).o: $(TEST_NAME).c
	gcc $(CFLAGS) -c $(TEST_NAME).c -o $(TEST_NAME).o

# Règle pour les bonus
bonus: $(BONUS_OBJS) libft.a
	ar -rcs $(NAME) $(BONUS_OBJS)

# Compilation des fichiers objets
%.o: %.c
	echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@
	echo "$@ compiled."

# Règle clean
clean:
	make clean -C $(LIBFT)
	rm -f $(OBJS) $(BONUS_OBJS) $(TEST_NAME).o

# Règle fclean
fclean: clean
	make fclean -C $(LIBFT) 
	rm -f $(NAME) $(TEST_NAME) libft.a

# Règle re
re: fclean all

# Autres règles inchangées
.PHONY: all clean fclean re bonus test
