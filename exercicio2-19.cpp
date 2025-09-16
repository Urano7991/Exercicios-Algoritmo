//Faça um programa em C++ que receba o salário ganho por uma pessoa, e seus gasto de conta de telefone celular. Calcule a porcentagem do salário que esta pessoa gasta com a conta de celular e imprima se esta porcentagem for menor ou igual a 5% “A sua conta está dentro do planejamento de gastos com telefone celular”, se ela estiver acima de 5% e menor que 7% imprima “Atenção para a sua conta de telefone celular.” E se ela estiver maior ou igual a 7% imprima “A sua conta está acima do planejamento de gastos com telefone celular. ” .
#include <iostream>

int main() {
    float salario, celular, gastos;
    
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    printf("Digite o valor da conta de celular: ");
    scanf("%f", &celular);
    
    gastos = (celular / salario) * 100;
    
    if (gastos <= 5)
        {
        printf("Sua conta  esta dentro do planejamento de gastos com telefone celular.");
        }
    else if ((gastos > 5) && (gastos < 7))
        {
        printf("Atenção para sua conta de celular");
        }
    else
        {
        printf("A sua conta está acima d planejamento de gastos com o telefone celular.");
        }
   

    return 0;
}
