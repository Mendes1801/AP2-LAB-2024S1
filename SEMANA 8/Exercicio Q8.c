//GABRIEL ERICK MENDES TIA: 10420391

//Q7. Altere a fun��o recursiva divisiveis() da Q6 para que, ao inv�s de retornar true/false, 
//a fun��o retorne a quantidade de n�meros em arr[] que s�o divis�veis por x. Aten��o! 
//A sua solu��o n�o deve usar vari�veis globais.

#include <stdio.h>

int  divisiveis(int arr[], int tam, int x){
	
	if (tam == 0){
		return 0;
	}
	
	if ((arr[tam-1] % x) == 0){
		
		return arr[tam-1] + divisiveis(arr, tam-1, x);
	}
	else{
		return divisiveis(arr, tam-1, x);
	}
	
}

int main(){
	
	int arr[] = {1,2,3,4,5,6};
	int a = divisiveis(arr, 6, 2);
	printf("%d", a);
	return 1;
}
