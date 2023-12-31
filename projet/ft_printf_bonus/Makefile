# Nom du programme
NAME = libftprintf.a
TEST_NAME = test_ftprintf

# Compiler et flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft -Iprintf
CFLAGS_BONUS = -DBONUS
CFLAGS_TEST = -g -Ilibft -Iprintf

# Dossiers
MANAGED_DIR = managed/
PRINTF_DIR = printf/
UTILITY_DIR = utility/
BONUS_DIR = bonus/

# Fichiers sources et objets
SRCS =  $(PRINTF_DIR)ft_printf.c \
		$(MANAGED_DIR)print_character.c \
		$(MANAGED_DIR)print_hex_lowercase.c \
		$(MANAGED_DIR)print_hex_uppercase.c \
		$(MANAGED_DIR)print_integer.c \
		$(MANAGED_DIR)print_percent_sign.c \
		$(MANAGED_DIR)print_pointer_address.c \
		$(MANAGED_DIR)print_signed_int.c \
		$(MANAGED_DIR)print_string.c \
		$(MANAGED_DIR)print_unsigned_int.c \
		$(UTILITY_DIR)decimal_to_hexa.c \
		$(UTILITY_DIR)print_adress.c \
		$(UTILITY_DIR)put_unbr.c

OBJS = $(SRCS:.c=.o)

# Fichiers sources et objets pour les bonus
BONUS_SRCS = $(BONUS_DIR)compter_caractere_adresse.c \
			 $(BONUS_DIR)compter_point_jusquau_specificateur.c \
			 $(BONUS_DIR)compter_pourcent_jusquau_specificateur.c \
			 $(BONUS_DIR)coordination_distribution_sommaire.c \
			 $(BONUS_DIR)coordination_initialisation_structure.c \
			 $(BONUS_DIR)envoyer_caractere_impression.c \
			 $(BONUS_DIR)gestionnaire_adresse_avec_option.c \
			 $(BONUS_DIR)gestionnaire_adresse_avec_precision.c \
			 $(BONUS_DIR)imprimer_adresse_avec_precision_et_largeur_de_champs.c \
			 $(BONUS_DIR)gestionnaire_adresse_avec_largeur_de_champs.c \
			 $(BONUS_DIR)gestionnaire_adresse_avec_precision_et_largeur_de_champs.c \
			 $(BONUS_DIR)gestionnaire_caractere_avec_option.c \
			 $(BONUS_DIR)gestionnaire_chaine_avec_option.c \
			 $(BONUS_DIR)gestionnaire_entier_signe_avec_option.c \
			 $(BONUS_DIR)imprimer_adresse_avec_largeur_de_champs.c \
			 $(BONUS_DIR)imprimer_adresse_avec_largeur_de_champs_et_minus.c \
			 $(BONUS_DIR)imprimer_adresse_avec_plus.c \
			 $(BONUS_DIR)imprimer_adresse_avec_precision.c \
			 $(BONUS_DIR)imprimer_adresse_avec_precision_et_largeur_de_champs.c \
			 $(BONUS_DIR)imprimer_adresse_avec_un_espace.c \
			 $(BONUS_DIR)imprimer_caractere_avec_espace.c \
			 $(BONUS_DIR)imprimer_caractere_sans_flag.c \
			 $(BONUS_DIR)imprimer_chaine_avec_espace.c \
			 $(BONUS_DIR)imprimer_chaine_avec_minus_precision_et_espace.c \
			 $(BONUS_DIR)imprimer_chaine_avec_precision_et_espace.c \
			 $(BONUS_DIR)imprimer_zero_pour_precision_adresse.c \
			 $(BONUS_DIR)initialisation_par_default_structure.c \
			 $(BONUS_DIR)recherche_drapeaux.c \
			 $(BONUS_DIR)recherche_specificateur.c \
			 $(BONUS_DIR)recherche_valeur_espace_precision.c \
			 $(BONUS_DIR)recuperation_taille_champs.c \
			 $(BONUS_DIR)recuperation_taille_precision.c 

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
test: $(NAME) $(TEST_NAME).o
		gcc -o $(TEST_NAME) $(TEST_NAME).o -L. -lftprintf -lft

$(TEST_NAME).o: test.c
		gcc $(CFLAGS_TEST) -c test.c -o $(TEST_NAME).o

# Règle pour tester la version bonus
test_bonus: bonus $(TEST_NAME)_bonus.o
		gcc -o $(TEST_NAME)_bonus $(TEST_NAME)_bonus.o -L. -lftprintf -lft

$(TEST_NAME)_bonus.o: test.c
		gcc $(CFLAGS_TEST) -c test.c -o $(TEST_NAME)_bonus.o

# Règle pour les bonus
bonus: $(PRINTF_DIR)ft_printf_bonus.o $(OBJS) $(BONUS_OBJS) libft.a
		ar -rcs $(NAME) $(PRINTF_DIR)ft_printf_bonus.o $(OBJS) $(BONUS_OBJS)

$(PRINTF_DIR)ft_printf_bonus.o: $(PRINTF_DIR)ft_printf.c
		echo "Compiling $< with BONUS..."
		$(CC) $(CFLAGS) $(CFLAGS_BONUS) -c $< -o $@
		echo "$@ compiled with BONUS."

# Compilation des fichiers objets
%.o: %.c
		echo "Compiling $<..."
		$(CC) $(CFLAGS) -c $< -o $@
		echo "$@ compiled."

# Règle clean
clean:
		make clean -C $(LIBFT)
		rm -f $(OBJS) $(BONUS_OBJS) $(PRINTF_DIR)ft_printf_bonus.o $(TEST_NAME).o $(TEST_NAME)_bonus.o test.o

# Règle fclean
fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME) $(TEST_NAME) $(TEST_NAME)_bonus libft.a

# Règle re
re: fclean all

.PHONY: all clean fclean re bonus test
