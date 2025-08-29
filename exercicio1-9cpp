//Faça um algoritmo em C++ que solicite ao usuário o valor de um produto e o desconto que será 
//aplicado neste produto caso seja pago à vista e imprima para o cliente o valor inicial do produto e o valor do produto com o desconto.

#include <iostream>

int main() {
    float produto, desconto, vista;
    
    printf("DIgite o valor do produto: ");
    scanf("%f", &produto);
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);
    
    desconto = produto * (desconto / 100);
    vista = produto - desconto;
    
    printf("O valor do produto era R$ %.2f com o descnto o produto ficou R$ %.2f", produto, vista);
    
    return 0;
}
