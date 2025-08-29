//Elabore um algoritmo em C++ que solicite o valor do salário de uma pessoa e seus gastos com as contas de 
//Água, Luz, Telefone e Aluguel e após ter estes dados calcule qual o valor total destas contas e o valor que esta 
//pessoa terá em caixa após estes pagamentos.
#include <iostream>

int main() {
    float salario, agua, luz, telefone, aluguel, contas, caixa;
    
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor da agua, luz, telefone e aluguel: ");
    scanf("%f %f %f %f", &agua, &luz, &telefone, &aluguel);
    
    contas = agua + luz + telefone + aluguel;
    caixa = salario - contas;
    
    printf("seus gastos somam R$ %.2f e seu caixa ficará com R$ %.2f.", contas, caixa);
     
    return 0;
}
