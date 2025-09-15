//Elabore um algoritmo em C++ que solicite ao usuário um número e imprima se ele é menor que 13.
#include <iostream>

int main() {
    float num1, num2, media;
    
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    
    media = (num1 + num2) / 2;
    printf("A média é %.2f.", media);
    
    if((media > 12) && (media < 30))
        {
            printf("\nA média esta entre 12 e 30");
        }
    else if(media < 12)
        {
            printf("\nA média é menor que 12.");
        }
    else
        {
            printf("\nA média é maior que 30.");
        }

    return 0;
}
