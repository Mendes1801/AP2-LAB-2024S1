#include <stdio.h>
#include <stdbool.h>

/*

8. Escreva uma fun��o que recebe dois vetores inteiros A[] e B[] e seus tamanhos. A fun��o deve imprimir na tela os valores 
referentes � INTERSEC��O entre os vetores, ou seja, os elementos em comum entre os dois vetores. 
Considere que os vetores dados n�o possuem valores duplicados e n�o est�o ordenados.:
A[] = { 7, 2, 5, 8, 4} e B[]= {4, 2, 9, 5} ent�o 
A DIS B = {2, 5, 4} // resposta

	A[] = { 3, 9, 11} e B[]= {2, 6, 1} ent�o 
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
		
		if (apareceu == false){ //encontra os valores n�o repitidos
				
				printf("%d ", A[i]);
				
			}
		
		printf("%d ", A[i]); //Insere qualquer vetor no print para completar a uni�o
	}	
	
	printf("]");
}




int main(){
	
	int A[] = { 7, 2, 5, 8, 4} , B[]= {4, 2, 9, 5} ;
	vetores(A,5,B,4);
	
	return 0;
}
