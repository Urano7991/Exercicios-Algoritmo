//Faça um algoritmo em C++ que solicite ao usuário 3 números e calcule a soma e a média destes números.


#include <iostream>

int main() {
    int num1, num2, num3, soma, media;
    
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    soma = num1 + num2 + num3;
    media = soma / 3;
    
    printf("A soma dos numeros é %d, e a media da soma é %d.", soma, media);
    
    return 0;
}
