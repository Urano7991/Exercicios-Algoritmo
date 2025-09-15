//Faça um algoritmo em C++ que solicite um número e diga se ele é par ou ímpar.

#include <iostream>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    
    if(num % 2 == 0)
        {
            printf("%d é par.", num);
        }
    else
        {
            printf("%d é impar.", num);
        }


    return 0;
}
