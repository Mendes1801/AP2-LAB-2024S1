#include <stdio.h>
#include <stdbool.h>

/*

8. Escreva uma função que recebe dois vetores inteiros A[] e B[] e seus tamanhos. A função deve imprimir na tela os valores 
referentes à INTERSECÇÃO entre os vetores, ou seja, os elementos em comum entre os dois vetores. 
Considere que os vetores dados não possuem valores duplicados e não estão ordenados.:
A[] = { 7, 2, 5, 8, 4} e B[]= {4, 2, 9, 5} então 
A DIS B = {2, 5, 4} // resposta

	A[] = { 3, 9, 11} e B[]= {2, 6, 1} então 
A DIS B= {} // resposta


*/

void vetores(int A[], int a, int B[], int b){
	
	
	printf("[ ");
	
	for(int i = 0;i<a;i++){
		
		bool apareceu = false;
		
		for(int j = 0;j<b;j++){
			
			if(A[i]==B[j]){
				apareceu = true;
			}		
		
		}	
		
		if (apareceu == false){ //encontra os valores não repitidos
				
				printf("%d ", A[i]);
				
			}
		
		printf("%d ", A[i]); //Insere qualquer vetor no print para completar a união
	}	
	
	printf("]");
}




int main(){
	
	int A[] = { 7, 2, 5, 8, 4} , B[]= {4, 2, 9, 5} ;
	vetores(A,5,B,4);
	
	return 0;
}
