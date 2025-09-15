//Elabore um algoritmo em C++ que receba dois números e imprima se a soma destes números está entre o intervalo de 13 e 30, é menor que 13 ou se é maior que 20.

#include <iostream>

int main() {
    int num, num2, soma;
    
    printf("Digite dois numeros numero: ");
    scanf("%d %d", &num, &num2);
    
    soma = num + num2;
    
    if((soma > 13) && (soma < 30)) 
        {
            printf("%d Está entre 13 e 30.", soma);
        }
    if (soma > 20)
        {
            printf("\n%d É maior que 20.", soma);
        }
    else if(soma < 13)
        {
            printf("\n%d É menor que 13.", soma);
        }
    return 0;
}
