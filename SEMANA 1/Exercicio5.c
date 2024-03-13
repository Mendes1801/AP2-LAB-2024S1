#include <stdio.h>
#include <math.h>

int main(){

	float raio, area;
	
	printf("Digite o raio do circulo : ");	
	scanf("%f",&raio);
	
	area = M_PI*pow(raio,2);
	
	printf("A area de um circulo de raio %.1f é %.1f \n", raio, area);

return 0;
}
