//Faça um algoritmo em C++ que pergunte ao usuário a sua idade e levando em conta que um ano tem 365 dias, imprima quantos dias ele já viveu.
#include <iostream>

int main() {
    int idade, dias, ano;
    
    printf("Digte sua idade: ");
    scanf("%d", &idade);
    
    ano = 365;
    dias = idade * ano;
    
    printf("Você já viveu: %d dias.", dias);
    
     
    return 0;
}
