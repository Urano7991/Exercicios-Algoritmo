//Faça um algoritmo em C++ que calcule e imprima o dobro de um número digitado pelo usuário.

#include <iostream>

int main() {
    int numero, dobro;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    dobro = numero * 2;
    
    printf("O dobro de %d é %d", numero, dobro);
    
    return 0;
}
