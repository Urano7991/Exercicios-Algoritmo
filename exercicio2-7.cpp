//Faça um algoritmo em C++ que receba dois números e imprima qual é o menor e qual é o maior e se forem iguais, imprima a frase: “Você digitou 2 números iguais!”.

#include <iostream>

int main() {
    float num1, num2;
    
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    
    
    if(num1 > num2)
        {
            printf("%.2f é maior.\n%.2f é menor\n", num1, num2);
        }
    else if(num1 < num2)
        {
            printf("%.2f é maior.\n%.2f é menor\n", num2, num1);
        }
    else
    printf("Você digitou dois numeros iguais");

    return 0;
}
