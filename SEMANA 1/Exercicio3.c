#include <stdio.h>

int main(){

	float temperaturaC, temperaturaF;
	
	printf("Digite a temperatura em C: \n");	
	scanf("%f",&temperaturaC);
	
	
	temperaturaF = (temperaturaC*9/5)+32;
	
	printf("A temperatura %.2f graus Ceusius é %.2f em Fahrenheit \n",temperaturaC,temperaturaF);

return 0;
}
