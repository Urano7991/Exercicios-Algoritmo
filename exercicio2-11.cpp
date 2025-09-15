// Faça um algoritmo em C++ que solicite ao usuário um número e mostre se ele é divisível por 7.
#include <iostream>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num % 7 == 0) 
        {
            printf("%d é divisível por 7.", num);
        }
        else 
        {
            printf("%d não é divisível por 7.", num);
        }
     
    return 0;
}
