#include <stdio.h>

int main(void)
{
	int b = -52;
	

	printf("\"%2d\"\n", b);		//"52"
	printf("\"%02d\"\n", b);	//"52"
	printf("\"%3d\"\n", b);		//" 52"
	printf("\"%03d\"\n", b);	//"052"
	printf("\"%4d\"\n", b);		//"  52"
	printf("\"%04d\"\n", b);	//"0052"
	printf("\"%-200d\"\n", b);	//" 52                                                                                "

}