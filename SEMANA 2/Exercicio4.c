#include <stdio.h>

main(){
	
	int num1, i;
	
	printf("Digite o n�mero: ");
	scanf("%d",&num1);	
	
	printf("Os divisores de %d s�o: ", num1);
	
	for (i = 1;i <= num1/2; i++) {
		
		
		if (num1%i == 0){
			
			printf("%d ", i );
			
		}
		
	}	
return 0;
}
