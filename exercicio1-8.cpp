//Faça um algoritmo em C++ que solicite o preço de custo de um produto e a margem de lucro que o 
//comerciante deseja em sua venda e calcule o valor que este produto deve ser colocado à venda.
#include <iostream>

int main() {
    float custo, lucro, margem, venda;
    
    printf("Digite o preço de custo do produto: ");
    scanf("%f", &custo);
    printf("Digite a margem de lucro que você deseja: ");
    scanf("%f", &lucro);
    
    margem = custo * (lucro / 100);
    venda = custo + margem;
    
    printf("O produto deve ser colocado a venda a R$ %.2f", venda);
    
    return 0;
}
