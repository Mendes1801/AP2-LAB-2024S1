#include <stdio.h>

int main()
{
    float a,b,multiplica,soma,subtrai;
    float divide;

    printf("Digite um número: ");
    scanf("%f",&a);

    printf("Digite outro número: ");
    scanf("%f", &b);

    multiplica = a*b;
    soma = a+b;
    subtrai = a-b;
    divide = a/b;
    
    printf("A soma de %.1f e %.1f é: %.1f\n",          a,b, soma);
    printf("A subtração de %.1f e %.1f é: %.1f\n",     a,b, subtrai);
    printf("A multiplicação de %.1f e %.1f é: %.1f\n", a,b, multiplica);
    printf("A divisão de %.1f e %.1f é: %.1f\n",       a,b, divide);

    return 0;
}
