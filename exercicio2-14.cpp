//Faça um algoritmo em C++ que solicite um número e imprima se ele está entre 21 e 30 ou não.
#include <iostream>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if((num > 21) && (num < 30)) 
        {
            printf("%d está entre 21 e 30.", num);
        }
    else 
        {
            printf("%d não está entre 21 e 30", num);
        }
    return 0;
}
