#include <stdio.h>

int main() {
	
	float peso, altura, imc;
		
	printf("Escreva seu peso: ");
	scanf("%f",&peso);
	
	printf("Escreva sua altura: ");
	scanf("%f",&altura);
	
	imc = peso/(altura*altura);
	
	printf("O IMC para o peso %f e altura de %f é %f", peso, altura, imc);
	
	return 0;
}
