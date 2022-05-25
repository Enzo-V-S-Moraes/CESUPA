#include <stdio.h>
#include <string.h>

int main()
{
	char s[200], outra[200];
	
	printf("Qual a sua string?\n");	gets(s);
	
	strcpy(outra, s);
	
	printf("Original: %s \nCopia: %s", s, outra);

 	return 0;
}