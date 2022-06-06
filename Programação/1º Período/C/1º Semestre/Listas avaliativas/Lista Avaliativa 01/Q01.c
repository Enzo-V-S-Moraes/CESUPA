#include <stdio.h>
#include <math.h>
int main()
{
	double g, r;
	
	printf("Digite um valor em graus: ");
	scanf("%lf", &g);
	
	r = M_PI*g/180;
	
	printf("Seno: %lf\n", sin(r));
	printf("Cosseno: %lf\n", cos(r));
	printf("Tangente: %lf\n", tan(r));
	printf("Secante: %lf\n", 1/cos(r));
	printf("Cosecante: %lf\n", 1/sin(r));
	printf("Cotagente: %lf\n", 1/tan(r));
	
 	return 0;
}