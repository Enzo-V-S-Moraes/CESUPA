#include <stdio.h>

int main()
{
	int x = 5;
	int *ptr_x = &x;
	int **ptr_ptr_x = &ptr_x;
	
	printf("X: %d \t &X: %d\n\n", x, &x);
	printf("*PTR: %d \t &PTR: %d\n\n", *ptr_x,
						&ptr_x);
	printf("**PTR: %d \t *PTR: %d, &PTR: %d\n\n",
				**ptr_ptr_x, *ptr_ptr_x, ptr_ptr_x);
	
	
	
 	return 0;
}