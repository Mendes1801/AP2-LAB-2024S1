#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main() {

int dado, palpite, tentativas;

srand(time(NULL));

dado = 1 + rand()%100;

printf("Lancei o dado, tente adivinhar o valor!!\n");
printf("Seu palpite: ");

while (palpite  != dado && tentativas <=5) {

	scanf("%d", &palpite);
	printf("Insira um valor entre 1 e 100!!\n");
	
	while ((palpite < 1) || (palpite > 100)) {
		
		printf("Insira um valor entre 1 e 100!!\n");
		scanf("%d", &palpite);	
	}
	
	
	if (palpite > dado) 
	{	
		printf("Você chutou muito alto! Tente novamente.\n");		
	}
	else if (palpite <dado) 
	{	
		printf("Você chutou muito baixo! Tente novamente.\n");	
	}
	else
	{
		printf("Parabéns!!! Você acertou!");
	}
	
	tentativas++;
	
	if (tentativas > 5){
		
		printf("Você excedeu o número de tentativas!!");
		
	}
	

}


return 0;
}
