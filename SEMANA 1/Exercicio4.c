#include <stdio.h>
#include <math.h>

int main(){

	float cateto1, cateto2, hipo;
	
	printf("Digite o cateto 1 do triangulo: ");	
	scanf("%f",&cateto1);

	printf("Digite o cateto 2 do triangulo: ");	
	scanf("%f",&cateto2);
	
	hipo = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	printf("A hipotenusa para os catetos %.1f e %.1f é %.1f \n", cateto1, cateto2, hipo);

return 0;
}
