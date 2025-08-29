//Faça um algoritmo em C++ que receba o valor de um produto e calcule e imprima o valor 
//final deste produto que está com um desconto de 9,05 %.
#include <iostream>

int main() {
    float produto, desconto, valorFinal;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    
    desconto = produto * 0.095;
    valorFinal = produto - desconto;
    
    printf("O valor do produto com desconto é: R$ %.2f", valorFinal);
    
    return 0;
}
