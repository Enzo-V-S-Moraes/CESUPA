#include <stdio.h>

int main()
{
	int a = 5, b = 7;
	int *ptr = NULL;
	
	printf("A = %d\n", a);
	printf("&A = %d\n\n", &a);
	
	printf("B = %d\n", b);
	printf("&B = %d\n\n", &b);
	
	ptr = &a;
	
	printf("ptr = %d\n", ptr);
	printf("*ptr = %d\n\n", *ptr);
	
 	return 0;
}