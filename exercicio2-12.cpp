// Elabore um algoritmo em C++ que receba dois números e imprima se a soma destes números é maior, menor ou igual o dobro do primeiro número digitado.
#include <iostream>

int main() {
    int num, num2, soma, dobro;
    
    printf("Digite um numero: ");
    scanf("%d %d", &num, &num2);
    
    soma = num + num2;
    dobro = num * 2;
    
    if(soma > dobro) 
        {
            printf("%d é maior que o dobro de %d.", soma, num);
        }
    else if(soma < dobro)
        {
            printf("%d é menor que o dobro de %d", soma, num);
        }
    else
        {
            printf("%d é igual ao dobro de %d", soma, num);
        }
     
    return 0;
