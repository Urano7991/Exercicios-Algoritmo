//Elabore um algoritmo em C++ que receba dois números e imprima se a soma destes números é maior que 123.

#include <iostream>

int main() {
    int num1, num2, soma;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    
    soma = num1 + num2;
    
    if(soma > 123)
        {
            printf("%d é maior que 123.", soma);
        }
    else if(soma == 123)
        {
            printf("%d é igual a 123.", soma);
        }
    else
        {
            printf("%d é menor que 123.", soma);
        }

    return 0;
