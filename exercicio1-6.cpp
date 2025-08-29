//Elabore um algoritmo em C++ que deixe o usuário entrar com o saldo de uma aplicação e imprima o novo saldo, considerando o reajuste de 2 %.
#include <iostream>

int main() {
    float saldo, reajuste, novoSaldo;
    
    printf("Digite seu saldo: ");
    scanf("%f", &saldo);
    
    reajuste = saldo * 0.02;
    novoSaldo = saldo + reajuste;
    
    printf("Seu novo saldo é: R$ %.2f", novoSaldo);
     
    return 0;
}
