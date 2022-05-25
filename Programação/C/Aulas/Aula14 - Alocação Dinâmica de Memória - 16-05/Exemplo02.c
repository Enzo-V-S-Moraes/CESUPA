#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[200], *ptr;
	
	printf("Qual a sua string?\n"); gets(s);
	
	ptr = (char*) malloc(strlen(s)+1);
	if(ptr == NULL)
		printf("Problema na alocação de memoria\n");
	else
	{
		strcpy(ptr, s);
		printf("Original: %s \nCopia: %s\n", s, ptr);
		free(ptr);
	}

 	return 0;
}