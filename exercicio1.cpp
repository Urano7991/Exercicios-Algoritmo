//Faça um algoritmo em C+ que solicite ao usuário o seu salário e o valor que ele gasta em conta
//de agua e conta de luz e imprima o total dos seus gastos e o valor que sobra no final do mês do seu
//salário já descontando os gastos.

int main() {
    float salario, agua, luz, gasto, sobra;
    
     printf("Digite seu salario: ");
     scanf("%f", &salario);
     printf("Digite o valor da conta de agua: ");
     scanf("%f", &agua);
     printf("Digite o valor da conta de luz: ");
     scanf("%f", &luz);
     
     gasto = agua + luz;
     sobra = salario - gasto;
     
     printf("\nSeu salário é: %.2f", salario);
     printf("\nSeu gasto é: %.2f", gasto);
     printf("\nO que sobra no final do mes é: %.2f", sobra);
     
     
    return 0;
}
