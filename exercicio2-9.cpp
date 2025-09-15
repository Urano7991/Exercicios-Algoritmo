// Faça um algoritmo em C++ que solicite um número e diga se ele é negativo ou positivo.

#include <iostream>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    
    if(num > 0)
        {
            printf("%d é positivo.", num);
        }
    else
        {
            printf("%d é negativo.", num);
        }


    return 0;
}
