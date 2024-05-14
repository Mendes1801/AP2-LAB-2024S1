#include <stdio.h>
#define MAX_SIZE 100

/* Implemente em para um array num�rico em C fun�es equivalentes aos m�todos de listas do Python: count, index, reverse e sort. 
Todas as fun�es podem receber o tamanho do vetor (MAX_SIZE 100). Crie o programa main() que emprega e testa essas fun�es. */


int count(int list[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == element) {
            count++;
        }
    }
    return count;
}

int indexx(int list[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (list[i] == element) {
            return i;
        }
    }
    return -1;
}

void reverse(int list[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
}

void sort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}


void append(int valor, int *list, int *size) {
    if (*size < MAX_SIZE) {
        list[*size] = valor;
        (*size)++;
    }
}

void insert(int valor, int *list, int *size, int pos) {
    if (*size < MAX_SIZE) {
      
      for(int i = *size; i >= pos; i--){
        list[i+1] = list[i];
      }
        list[pos] = valor;
        (*size)++;
    }
}

void pop(int *list, int *size, int element) {

  int popped;
  int indx = indexx(list, *size, element);
  
  printf("%i", indx);
  
  if (indx <= MAX_SIZE){
    
      for(int i = indx; i <= (*size)-1; i++){
        list[i] = list[i+1];
      }
  }  
  
  (*size)--;
  
    }

void remover(int *list, int *size, int indx) {

if (indx <= MAX_SIZE){

    for(int i = indx; i <= (*size)-1; i++){
      list[i] = list[i+1];
    }
}  

(*size)--;

  }

int main() {
    int list[MAX_SIZE] = {25, 3, 7, 50, 75, 100};
    int size = 6;


    //COUNT
    int quantidade = count(list, size, 3);
    printf("Count of 3: %d\n", quantidade);
  
    //INDEX
    int indx = indexx(list, size, 7);
    printf("Index of 7: %d\n", indx);
  
    // APPEND
    append(3, list, &size);
  
    printf("Lista após acrescentar : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    // INSERT
    insert(5, list, &size, 1);

    printf("Lista após inserção: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    //POP
    int popped;

    printf("Popped element: ");
    scanf("%i",&popped);
  
    pop(list, &size,popped);

    printf("Lista após pop : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

  //POP
  int removido;

  printf("Remove element: ");
  scanf("%i",&removido);

  remover(list, &size,removido);

  printf("Lista após remoção : ");
  for (int i = 0; i < size; i++) {
      printf("%d ", list[i]);
  }
  printf("\n");

  //REVERSÃO
  reverse(list,size);
  printf("Lista após reversão : ");
  for (int i = 0; i < size; i++) {
      printf("%d ", list[i]);
  }
  printf("\n");
  
  //ORDENAÇÃO
  sort(list,size);
  printf("Lista após ordenação : ");
  for (int i = 0; i < size; i++) {
      printf("%d ", list[i]);
  }
  printf("\n");
  
    return 0;
}
