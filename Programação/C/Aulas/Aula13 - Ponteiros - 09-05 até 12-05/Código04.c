#include <stdio.h>

int main()
{
	char s[10] = "Cesupa";
	
	char *ptr = s; //&s[0];
	
	printf("%c\n", s[4]);
	printf("%c\n", *(ptr+4));
	printf("%c\n", ptr[4]);
	
 	return 0;
}