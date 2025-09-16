//Faça um algoritmo em C++ que solicite ao usuário um número e mostre se ele é divisível por 5 e caso não seja, imprima o próximo número acima do digitado pelo usuário que é múltiplo de 5.
#include <iostream>

int main() {
    int num, prox;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 5 == 0)
        {
        printf("%d é divisivel por 5.", num);
        }
    else 
        {
        prox = num + (5 - (num % 5));
        printf("%d não é divisível por 5.\nO próximo número múltiplo de 5 é %d.",num, prox);
        }


    return 0;
}
