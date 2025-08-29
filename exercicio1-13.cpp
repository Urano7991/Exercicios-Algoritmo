//Faça um algoritmo em C++ que calcule e imprima o quadrado de um número digitado pelo usuário.
//OBS: Não utilize o comando “pow( )”


#include <iostream>

int main() {
    int num, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    quadrado = num * num;
    
    printf("O quadrado de %d é %d.", num, quadrado);
    
    return 0;
}
