//Faça um programa em C++ que receba o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá escrever "Financiamento Concedido"; senão, escreverá "Financiamento Negado". Independente de conceder ou não o financiamento, o programa escreverá depois a frase "Obrigado por nos consultar."
#include <iostream>

int main() {
    float salario, financiamento;
    
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor do financiamento pretendido: ");
    scanf("%f", &financiamento);
    
    if (financiamento <= (salario * 5))
        {
        printf("Financiamento concedido.");
        }
    else
        {
        printf("Financiamento negado");
        }
        
    printf("\nObrigado por nos consultar.");

    return 0;
}
