#include <stdio.h>

float GrausToRadianos(float graus);

int main()
{
	float graus, radiano;
	
	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &graus);
	
	radiano = GrausToRadianos(graus);
	
	printf("Radiano: %.2f", radiano);
	
 	return 0;
}


float GrausToRadianos(float graus)
{
	return 3.1415*graus/180;
}