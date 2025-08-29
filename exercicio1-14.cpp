//Faça um algoritmo em C++ que calcule e imprima o cubo de um número digitado pelo usuário.
//OBS: Não utilize o comando “pow( )”


#include <iostream>

int main() {
    int num, cubo;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    cubo = num * num * num;
    
    printf("o cubo de %d é %d.", num, cubo);
    
    return 0;
}
