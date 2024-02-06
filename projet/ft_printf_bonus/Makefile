NAME = libftprintf.a
TEST_NAME = test_ftprintf

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft -Iprintf
CFLAGS_BONUS = -DBONUS
CFLAGS_TEST = -g -Ilibft -Iprintf

MANAGED_DIR = managed/
PRINTF_DIR = printf/
UTILITY_DIR = utility/
BONUS_DIR = bonus/

FT_PRINTF = $(PRINTF_DIR)ft_printf.c
FT_PRINTF_BONUS = $(BONUS_DIR)ft_printf_bonus.c

SRCS =  $(FT_PRINTF) \
		$(MANAGED_DIR)print_character.c \
		$(MANAGED_DIR)print_hex_lowercase.c \
		$(MANAGED_DIR)print_hex_uppercase.c \
		$(MANAGED_DIR)print_integer.c \
		$(MANAGED_DIR)print_percent_sign.c \
		$(MANAGED_DIR)print_pointer.c \
		$(MANAGED_DIR)print_signed_int.c \
		$(MANAGED_DIR)print_string.c \
		$(MANAGED_DIR)print_unsigned_int.c \
		$(UTILITY_DIR)decimal_to_hex.c \
		$(UTILITY_DIR)print_address.c \
		$(UTILITY_DIR)put_count_string.c \
		$(UTILITY_DIR)put_unbr.c \
		$(UTILITY_DIR)putnbr_upper_nine.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(FT_PRINTF_BONUS) \
			 $(MANAGED_DIR)print_character.c \
			 $(MANAGED_DIR)print_hex_lowercase.c \
			 $(MANAGED_DIR)print_hex_uppercase.c \
			 $(MANAGED_DIR)print_integer.c \
			 $(MANAGED_DIR)print_percent_sign.c \
			 $(MANAGED_DIR)print_pointer.c \
			 $(MANAGED_DIR)print_signed_int.c \
			 $(MANAGED_DIR)print_string.c \
			 $(MANAGED_DIR)print_unsigned_int.c \
			 $(UTILITY_DIR)decimal_to_hex.c \
			 $(UTILITY_DIR)print_address.c \
			 $(UTILITY_DIR)put_count_string.c \
			 $(UTILITY_DIR)put_unbr.c \
			 $(UTILITY_DIR)putnbr_upper_nine.c \
			 $(BONUS_DIR)address_option_manager.c \
			 $(BONUS_DIR)address_precision_manager.c \
			 $(BONUS_DIR)address_width_manager.c \
			 $(BONUS_DIR)count_address_characters.c \
			 $(BONUS_DIR)count_digits.c \
			 $(BONUS_DIR)count_percent_to_specifier.c \
			 $(BONUS_DIR)count_point_to_specifier.c \
			 $(BONUS_DIR)default_structure_initialization.c \
			 $(BONUS_DIR)field_size_recovery.c \
			 $(BONUS_DIR)flags_search.c \
			 $(BONUS_DIR)flags_search.c \
			 $(BONUS_DIR)lowercase_hexadecimal_manager.c \
			 $(BONUS_DIR)negative_precision_search.c \
			 $(BONUS_DIR)precision_size_recovery.c \
			 $(BONUS_DIR)precision_space_value_search.c \
			 $(BONUS_DIR)print_address_bonus.c \
			 $(BONUS_DIR)print_address_with_a_space.c \
			 $(BONUS_DIR)print_address_with_field_width_and_minus.c \
			 $(BONUS_DIR)print_address_with_field_width.c \
			 $(BONUS_DIR)print_address_with_plus.c \
			 $(BONUS_DIR)print_address_with_precision_and_field_width.c \
			 $(BONUS_DIR)print_address_with_precision.c \
			 $(BONUS_DIR)print_character_without_flag.c \
			 $(BONUS_DIR)print_character_with_space.c \
			 $(BONUS_DIR)print_lowercase_hexadecimal.c \
			 $(BONUS_DIR)print_raw_format.c \
			 $(BONUS_DIR)print_signed_integer_with_field_width_and_plus.c \
			 $(BONUS_DIR)print_signed_integer_with_field_width_and_precision.c \
			 $(BONUS_DIR)print_signed_integer_with_field_width_precision_and_minus.c \
			 $(BONUS_DIR)print_signed_integer_with_minus.c \
			 $(BONUS_DIR)print_signed_integer_without_option.c \
			 $(BONUS_DIR)print_signed_integer_with_plus_and_zero.c \
			 $(BONUS_DIR)print_signed_integer_with_plus.c \
			 $(BONUS_DIR)print_signed_integer_with_precision.c \
			 $(BONUS_DIR)print_signed_integer_with_space.c \
			 $(BONUS_DIR)print_string_with_minus_precision_and_space.c \
			 $(BONUS_DIR)print_string_with_precision_and_space.c \
			 $(BONUS_DIR)print_string_with_space.c \
			 $(BONUS_DIR)print_unsigned_integer_with_field_width_and_precision.c \
			 $(BONUS_DIR)print_unsigned_integer_with_field_width.c \
			 $(BONUS_DIR)print_unsigned_integer_with_field_width_precision_and_minus.c \
			 $(BONUS_DIR)print_unsigned_integer_with_minus.c \
			 $(BONUS_DIR)print_unsigned_integer_without_option.c \
			 $(BONUS_DIR)print_unsigned_integer_with_precision.c \
			 $(BONUS_DIR)print_uppercase_hexadecimal.c \
			 $(BONUS_DIR)print_zeros_for_address_precision.c \
			 $(BONUS_DIR)putchar_bonus.c \
			 $(BONUS_DIR)putnbr_bonus.c \
			 $(BONUS_DIR)putnstr_bonus.c \
			 $(BONUS_DIR)putstr_bonus.c \
			 $(BONUS_DIR)send_character_for_printing.c \
			 $(BONUS_DIR)signed_integer_field_width_manager.c \
			 $(BONUS_DIR)signed_integer_option_manager.c \
			 $(BONUS_DIR)signed_integer_width_and_precision_manager.c \
			 $(BONUS_DIR)specifier_search.c \
			 $(BONUS_DIR)string_option_manager.c \
			 $(BONUS_DIR)structure_initialization_coordination.c \
			 $(BONUS_DIR)summary_distribution_coordination.c \
			 $(BONUS_DIR)unsigned_integer_option_manager.c \
			 $(BONUS_DIR)unsigned_integer_width_and_precision_manager.c \
			 $(BONUS_DIR)uppercase_hexadecimal_manager.c \

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

LIBFT = libft
LIBFT_LIB = libft.a

all: $(NAME)

$(NAME): $(OBJS) libft.a
		 ar -rcs $(NAME) $(OBJS)

libft.a:
		make -C $(LIBFT)
		cp $(LIBFT)/$(LIBFT_LIB) .

test: $(NAME) $(TEST_NAME).o
		gcc -o $(TEST_NAME) $(TEST_NAME).o -L. -lftprintf -lft

$(TEST_NAME).o: test.c
		gcc $(CFLAGS_TEST) -c test.c -o $(TEST_NAME).o

bonus: $(BONUS_OBJS) libft.a
		ar -rcs $(NAME) $(BONUS_OBJS)

%.o: %.c
		echo "Compiling $<..."
		$(CC) $(CFLAGS) -c $< -o $@
		echo "$@ compiled."

clean:
		make clean -C $(LIBFT)
		rm -f $(OBJS) $(BONUS_OBJS) $(TEST_NAME).o $(TEST_NAME)_bonus.o

fclean: clean
		make fclean -C $(LIBFT)
		rm -f $(NAME)
		rm -f $(TEST_NAME) $(TEST_NAME)_bonus
		rm -f libft.a 

re: fclean all

.PHONY: all clean fclean re bonus test
