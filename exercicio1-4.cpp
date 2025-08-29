//Ivan tem um estacionamento e necessita de ajuda para calcular sua receita mensal. 
//Faça um algoritmo que solicite ao Ivan quantos clientes ele tem em seu 
//estacionamento e qual o valor da mensalidade e calcule sua receita mensal.
#include <iostream>

int main() {
    float clientes, mensalidade, receita;
    
    printf("Olá Ivan, digite quantos clientes você possui: ");
    scanf("%f", &clientes);
    printf("Agora digite o valor da mensalidade do seu estacionamento: ");
    scanf("%f", &mensalidade);
    
    receita = mensalidade * clientes;
    
    printf("Ivan, sua receita mensal é: %.2f", receita);
    
     
    return 0;
}
