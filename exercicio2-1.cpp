//Elabore um algoritmo em C++ que solicite ao usuário um número e imprima se ele é menor que 13.
#include <iostream>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num < 13)
        {
            printf("%d é ménor que 13.", num);
        }
    else if(num == 13)
        {
            printf("\n%d é igual a 13.", num);
        }
    else
        {
            printf("\n%d é maior que 13.", num);
        }

    return 0;
}
