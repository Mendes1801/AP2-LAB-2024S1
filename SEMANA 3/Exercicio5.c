#include <stdio.h>
#include <stdbool.h>

	
bool primo(int num){
		
	int quantidadeDivisores = 0;
		
	for(int i = 2;i<=num/2;i++){
		
		if (num%i == 0){
			
			quantidadeDivisores++;
			
		}	

	}
	
	
	if (quantidadeDivisores == 0){
			
		return true;
	}
	
	return false;
		
}

void contaPrimo(int Min, int Max){
	
	printf("Os numeros primos entre %d e %d sao: ", Min, Max);
	
	for (int i = Min;i<=Max;i++){
		
		if (primo(i) == true){
		
			printf("%d ", i);
			
		}		
		
	}
	
}


int main(){
	
	int valorMax, valorMin;
	
	printf("Insira o valor min: ");
	scanf("%d", &valorMin);
	
	printf("Insira o valor min: ");
	scanf("%d", &valorMax);

	contaPrimo(valorMin, valorMax);
	
	return 0;
}
