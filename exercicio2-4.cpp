//Elabore um algoritmo em C++ que solicite ao usuário o valor total de uma compra com 2 produtos escolhidos pelo usuário e caso 
//ele seja maior que R$150.00 atribua um desconto de 4.5% e caso seja entre R$100.00 e R$150.00 atribua um desconto de 2.49%, 
//no caso de menor que R$100.00 não atribua nenhum desconto. Imprima o valor total da compra, o valor do desconto e o valor 
//final a ser pago.
#include <iostream>

int main() {
    float prod1, prod2, total, desc1, td1, desc2, td2;
    
    printf("Digite o valor dos dois produtos: ");
    scanf("%f %f", &prod1, &prod2);
    
    total = prod1 + prod2;
    
    printf("O total da sua compra é R$%.2f.", total);
    
    if(total >= 150)
        {
            desc1 = total / 100 * 4.5;
            td1 = total - desc1;
            printf("\nVocê teve 4,5%% de desconto, %.2f.\nO valor total a pagar é R$%.2f.", desc1, td1);
        }
    else if((total >= 100) && (total < 150))
        {
            desc2 = total / 100 * 2.49;
            td2 = total - desc2;
            printf("\nVocê teve 2,49%% de desconto, %.2f.\nO valor total a pagar é R$%.2f.", desc2, td2);
        }
    else
        {
            printf("\nO total a pagar é R$%.2f.", total);
        }

    return 0;
}
