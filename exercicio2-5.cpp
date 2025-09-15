//Elabore um algoritmo em C++ que receba o valor de um produto e solicite o modo de pagamento que ele quer e imprima o valor total 
//do produto, o valor do produto conforme sua opção e os valores das prestações caso ele escolha esta opção. As regras que devemos 
//seguir são: caso o comprador queira pagar à vista tenha um desconto de 1.45%, caso queira dividir em 2 prestações deve-se atribuir
//0.15% de juros, caso queira dividir em 3 prestações atribua 1,06% de juros e caso queira dividir em 4 prestações atribua 1.51% de juros.
#include <iostream>

int main() {
    float prod, vista, totalv, div2, total2, div3, total3, div4, total4;
    int metodo;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &prod);
    printf("Escolha o metodo de pagamento:\n1. A Vista.\n2. 2x.\n3. 3x.\n4. 4x.");
    scanf("%d", &metodo);
    
    printf("Total do produto é: R$%.2f.", prod);
    if(metodo == 1)
        {
            vista = prod / 100 * 1.45;
            totalv = prod - vista;
            printf("\nComo você pagou a vista e recebeu R$%.2f de desconto. \nO valor total a pagar é R$%.2f.", vista, totalv);
        }
    else if (metodo == 2)
        {
            div2 = prod / 100 * 0.15;
            total2 = prod + div2;
            printf("\nComo você pagou de 2x pagará R$%.2f de juros. \nO valor total a pagar é R$%.2f.", div2, total2);
        }
    else if(metodo == 3)
        {
            div3 = prod / 100 * 1.06;
            total3 = prod + div3;
            printf("\nComo você pagou de 3x pagará R$%.2f de juros. \nO valor total a pagar é R$%.2f.", div3, total3);
        }
    else if(metodo == 4)
        {
            div4 = prod / 100 * 1.51;
            total4 = prod + div4;
            printf("\nComo você pagou de 4x pagará R$%.2f de juros. \nO valor total a pagar é R$%.2f.", div4, total4);
        }

    return 0;
}
