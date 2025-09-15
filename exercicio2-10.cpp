// Faça um algoritmo em C++ que solicite dois números e diga se a soma destes números é um numero positivo ou negativo e caso seja positivo, imprima se ele é um número positivo par ou se é positivo ímpar.

#include <iostream>

int main() {
    int num, num2, soma;
    
    printf("Digite um numero: ");
    scanf("%d %d", &num, &num2);
    
    soma = num + num2;
    
    if(soma > 0) 
    {
        if(soma % 2 == 0) 
        {
            printf("%d é positivo e par.", soma);
        }
        else 
        {
            printf("%d é positivo e impar.", soma);
        }
    }
    else if(soma < 0)
    {
        if(soma % 2 == 0)
        {
            printf("%d é negativo e par.", soma);
        }
        else{
            printf("%d é negativo e impar", soma);
        }
    }
    return 0;
}
