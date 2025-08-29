//Faça um algoritmo em C++ que solicite ao usuário 2 números e calcule e imprima o dobro da soma destes números.

#include <iostream>

int main() {
    int num1, num2, dobro;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    dobro = (num1 + num2) * 2;
    
    printf("o dobro da soma desses numeros é: %d", dobro);
    
    return 0;
}
