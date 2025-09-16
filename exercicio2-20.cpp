//Faça um programa em C++ que solicite ao funcionário de uma empresa o seu nome, sexo (masculino ou feminino) e sua idade e valor salarial. Levando em conta que a média salarial da empresa é de R$ 2500,00 para homens e R$ 1500,00 para mulheres, imprima o nome do funcionário, se ele esta acima ou abaixo da média, dependendo do seu sexo e a diferença (maior ou menor do seu salário para a média paga pela empresa).
#include <iostream>

int main() {
    float salario, media, diferenca;
    char nome[50];
    int sexo;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Sexo:\nEscolha 1 ou 2.\n1. F\n2. M");
    scanf("%d", &sexo);
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    
    if (sexo == 1)
        {
        media = 1500;
        }
    else if (sexo == 2)
        {
        media = 2500;
        }
    diferenca = salario - media;
    
    printf("Nome: %s\n", nome);
        if (diferenca > 0) 
        {
        printf("Acima da média salarial em R$ %.2f\n", diferenca);
        } 
        else if (diferenca < 0) 
        {
        printf("Abaixo da média salarial em R$ %.2f\n", -diferenca);
        } 
        else 
        {
        printf("Igual à média salarial.\n");
        }


    return 0;
}
