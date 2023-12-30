#include <stdio.h>
#include <string.h>

typedef struct s_phone
{	
	long int number;
}t_phone;

typedef struct s_adress
{
	int number;
	char name_street[50];
	int postal_code;
	char city[25];
	t_phone phone;
}t_adress;

typedef struct s_person
{
	char last_name[20];
	char first_name[20];
	int day_birth;
	int month_birth;
	int year_birth;

	t_adress adress;

}t_person;

int main(void)
{
	t_person matthieu;
	strcpy(matthieu.last_name, "Relouloute");
	strcpy(matthieu.first_name, "Gaia");
	matthieu.day_birth = 17;
	matthieu.month_birth = 8;
	matthieu.year_birth = 2019;
	matthieu.adress.number = 4;
	strcpy(matthieu.adress.name_street, "Rue des lièvres à croquer");
	matthieu.adress.postal_code = 60525;
	strcpy(matthieu.adress.city,"bicheparadise");
	matthieu.adress.phone.number = 545;
	printf("Nom : %s\nPrénom : %s\nnée le : %d/%d/%d\nAdresse : %d %s %d %s\nTéléphone : Non attribué\n", matthieu.last_name, matthieu.first_name, matthieu.day_birth, matthieu.month_birth, matthieu.year_birth, matthieu.adress.number, matthieu.adress.name_street, matthieu.adress.postal_code, matthieu.adress.city);
}