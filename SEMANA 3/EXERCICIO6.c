#include <stdio.h>
#include <math.h>

float expressao(int n){
	float resposta = 0;
	
	for(int k=1;k<=n;k++){
		
	resposta = resposta + ((k/pow(k,2))*pow(-1,(k+1)));
		
	}
	
	return resposta;
}

int main(){
	
	int num;
	printf("Escolha um numero: ");
	scanf("%d", &num);
	
	printf("%f", expressao(num));
	
	return 0;
}
