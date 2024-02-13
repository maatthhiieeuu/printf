NAME = libftprintf.a
TEST_NAME = test_ftprintf

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft -Iprintf
CFLAGS_BONUS = -DBONUS
CFLAGS_TEST = -g -Ilibft -Iprintf

MANAGED_DIR = obligatory/managed/
PRINTF_DIR = obligatory/printf/
UTILITY_DIR = obligatory/utility/
BONUS_DIR = bonus/c_managed/ bonus/community_function/ bonus/d_i_managed/ bonus/p_managed/ \
			bonus/parsing/ bonus/s_managed/ bonus/u_managed/ bonus/x_managed/ bonus/X_managed/
C_MANAGED_DIR = bonus/c_managed/
COMMUNITY_FUNCTION_DIR = bonus/community_function/
D_I_MANAGED_DIR = bonus/d_i_managed/
P_MANAGED_DIR = bonus/p_managed/
PARSING_DIR = bonus/parsing/
S_MANAGED_DIR = bonus/s_managed/
U_MANAGED_DIR = bonus/u_managed/
UPPER_X_MANAGED_DIR = bonus/X_managed/
LOWER_X_MANAGED_DIR = bonus/x_managed/

FT_PRINTF = obligatory/printf/ft_printf.c
FT_PRINTF_BONUS = bonus/parsing/ft_printf_bonus.c

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
		$(UTILITY_DIR)check_write.c \
		$(UTILITY_DIR)decimal_to_hex.c \
		$(UTILITY_DIR)print_address.c \
		$(UTILITY_DIR)put_count_string.c \
		$(UTILITY_DIR)put_unbr.c \
		$(UTILITY_DIR)print_int_with_char_count.c

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
			 $(UTILITY_DIR)check_write.c \
			 $(UTILITY_DIR)decimal_to_hex.c \
			 $(UTILITY_DIR)print_address.c \
			 $(UTILITY_DIR)put_count_string.c \
			 $(UTILITY_DIR)put_unbr.c \
			 $(UTILITY_DIR)print_int_with_char_count.c \
			 $(P_MANAGED_DIR)address_option_manager.c \
			 $(P_MANAGED_DIR)address_precision_manager.c \
			 $(P_MANAGED_DIR)address_width_manager.c \
			 $(P_MANAGED_DIR)count_address_characters.c \
			 $(COMMUNITY_FUNCTION_DIR)count_digits.c \
			 $(COMMUNITY_FUNCTION_DIR)count_digits_hex.c \
			 $(PARSING_DIR)count_percent_to_specifier.c \
			 $(PARSING_DIR)count_point_to_specifier.c \
			 $(PARSING_DIR)default_structure_initialization.c \
			 $(PARSING_DIR)field_size_recovery.c \
			 $(PARSING_DIR)flags_search.c \
			 $(PARSING_DIR)ft_printf_bonus.c \
			 $(LOWER_X_MANAGED_DIR)lowercase_hexadecimal_manager.c \
			 $(PARSING_DIR)negative_precision_search.c \
			 $(PARSING_DIR)precision_size_recovery.c \
			 $(PARSING_DIR)precision_space_value_search.c \
			 $(P_MANAGED_DIR)print_address_bonus.c \
			 $(P_MANAGED_DIR)print_address_with_a_space.c \
			 $(P_MANAGED_DIR)print_address_with_field_width_and_minus.c \
			 $(P_MANAGED_DIR)print_address_with_field_width.c \
			 $(P_MANAGED_DIR)print_address_with_plus.c \
			 $(P_MANAGED_DIR)print_address_with_precision_and_field_width.c \
			 $(P_MANAGED_DIR)print_address_with_precision.c \
			 $(C_MANAGED_DIR)print_character_without_flag.c \
			 $(C_MANAGED_DIR)print_character_with_space.c \
			 $(LOWER_X_MANAGED_DIR)print_lowercase_hexadecimal.c \
			 $(LOWER_X_MANAGED_DIR)print_lowercase_hexadecimal_with_field_space.c \
			 $(COMMUNITY_FUNCTION_DIR)print_raw_format.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_field_width_and_plus.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_field_width_and_precision.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_field_width_precision_and_minus.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_minus.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_without_option.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_plus_and_zero.c \
			 $(COMMUNITY_FUNCTION_DIR)print_integer_with_plus.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_precision.c \
			 $(D_I_MANAGED_DIR)print_signed_integer_with_space.c \
			 $(S_MANAGED_DIR)print_string_with_minus_precision_and_space.c \
			 $(S_MANAGED_DIR)print_string_with_precision_and_space.c \
			 $(S_MANAGED_DIR)print_string_with_space.c \
			 $(U_MANAGED_DIR)print_unsigned_integer_with_field_width_and_precision.c \
			 $(U_MANAGED_DIR)print_unsigned_integer_with_field_width.c \
			 $(U_MANAGED_DIR)print_unsigned_integer_with_field_width_precision_and_minus.c \
			 $(U_MANAGED_DIR)print_unsigned_integer_with_minus.c \
			 $(U_MANAGED_DIR)print_unsigned_integer_without_option.c \
			 $(U_MANAGED_DIR)print_unsigned_integer_with_precision.c \
			 $(UPPER_X_MANAGED_DIR)print_uppercase_hexadecimal.c \
			 $(UPPER_X_MANAGED_DIR)print_uppercase_hexadecimal_with_field_space.c \
			 $(P_MANAGED_DIR)print_zeros_for_address_precision.c \
			 $(COMMUNITY_FUNCTION_DIR)putchar_bonus.c \
			 $(COMMUNITY_FUNCTION_DIR)putnbr_bonus.c \
			 $(COMMUNITY_FUNCTION_DIR)putnstr_bonus.c \
			 $(COMMUNITY_FUNCTION_DIR)putstr_bonus.c \
			 $(C_MANAGED_DIR)send_character_for_printing.c \
			 $(D_I_MANAGED_DIR)signed_integer_field_width_manager.c \
			 $(D_I_MANAGED_DIR)signed_integer_option_manager.c \
			 $(D_I_MANAGED_DIR)signed_integer_width_and_precision_manager.c \
			 $(PARSING_DIR)specifier_search.c \
			 $(S_MANAGED_DIR)string_option_manager.c \
			 $(PARSING_DIR)structure_initialization_coordination.c \
			 $(PARSING_DIR)summary_distribution_coordination.c \
			 $(U_MANAGED_DIR)unsigned_integer_option_manager.c \
			 $(U_MANAGED_DIR)unsigned_integer_width_and_precision_manager.c \
			 $(UPPER_X_MANAGED_DIR)uppercase_hexadecimal_manager.c \

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
		echo $(OBJS) $(BONUS_OBJS) $(TEST_NAME).o $(TEST_NAME)_bonus.o
		rm -f $(OBJS) $(BONUS_OBJS) $(TEST_NAME).o $(TEST_NAME)_bonus.o

fclean: clean
		make fclean -C $(LIBFT)
		rm -f $(NAME)
		rm -f $(TEST_NAME) $(TEST_NAME)_bonus
		rm -f libft.a 

re: fclean all

.PHONY: all clean fclean re bonus test
