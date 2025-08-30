//Ivan mora em um prédio que tem 4 andares, onde temos a seguinte situação, no primeiro e no segundo andar 
//temos 3 apartamentos em cada (sendo todos do mesmo tamanho), no terceiro andar é todo um único apartamento e 
//no quarto andar é uma cobertura onde tem uma piscina. Todo mês o síndico tem uma grande dificuldade para fazer o 
//rateio da conta de água, pois ele deve ser feito da seguinte maneira, 30% da conta deve ser paga pelo morador do quarto 
//andar, 20% da conta deve ser pago pelo morador do terceiro andar e o restante da conta deve ser dividido igualmente entre os demais 
//moradores, que são 6. Faça um programa em C++ que solicite ao síndico o valor da conta de água e resolva este cálculo, 
//imprimindo o valor que cada morador deve pagar
#include <iostream>

int main() {
    float valor, primeiro, segundo, terceiro, quarto;
    
    printf("Digite o valor da conta de água: ");
    scanf("%f", &valor);
    
    primeiro = ((valor / 100) * 25) / 3;
    segundo = ((valor / 100) * 25) / 3;
    terceiro = (valor / 100) * 20;
    quarto = (valor / 100) * 30;
    
    printf("O valor total da conta de agua é: R$%.2f. \nO que cada morador deverá pagar é:\n Primeiro andar: cada morador irá pagar R$%.2f. \n Segundo andar: cada morador irá pagar R$%.2f. \n Terceiro andar: o morador irá pagar R$%.2f. \n Quarto andar: o morador irá pagar R$%.2f", valor, primeiro, segundo, terceiro, quarto);
    
    return 0;
}
