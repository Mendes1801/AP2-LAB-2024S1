#include <stdio.h>

main(){
	
	int num1, i; 
	
	int numPerfeito = 0;
	
	printf("Digite o n�mero: ");
	scanf("%d",&num1);	
	
	for (i = 1;i <= num1/2; i++) {
		
		
		if (num1%i == 0){
			
			numPerfeito = numPerfeito + i;
			
		}
	
		
	}
	
	if (numPerfeito == num1){
			
		printf("%d � um n�mero perfeito!", num1);
	}
	else {
			
		printf("%d N�O � um n�mero perfeito!", num1);
	}	
return 0;
}
