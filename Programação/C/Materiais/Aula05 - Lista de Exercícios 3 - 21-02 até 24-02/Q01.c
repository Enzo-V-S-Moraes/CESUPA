/*
*	Questão 01
*
*	Efetuar o cálculo da quantidade de litros de combustível gasta em uma
* viagem, utilizando-se um automóvel que faz 12 km/l. Para obter o cálculo, o
* usuário deverá fornecer o tempo gasto na viagem e a velocidade média
* durante a mesma. O programa deverá apresentar os valores da velocidade
* média, tempo gasto na viagem, a distância percorrida e a quantidade de
* litros utilizada na viagem.
*/

#include <stdio.h>

void main()
{
	// Variáveis para salvar os dados de entrada do usuário
	float vMedia, tempo;
	// Variáveis para salvar os resultados dos calculos
	float distancia, consumo;
	
	// Pegando os valores da velocidade média e do tempo com o usuário
	printf("Digite o valor da velocidade media: ");
	scanf("%f", &vMedia);
	printf("Digite o valor do tempo da viagem: ");
	scanf("%f", &tempo);
	
	// Calculo da distancia e do consumo
	distancia = vMedia * tempo;
	consumo = distancia/12;
	
	// Imprimir o resultado
	printf("Velocidade Media: %.2f\n", vMedia);
	printf("Tempo Viagem: %.2f\n", tempo);
	printf("Distancia viagem: %.2f\n", distancia);
	printf("Consumo: %.2f\n", consumo);
}
