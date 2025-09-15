//Elabore um algoritmo em C++ que receba 3 números e imprima se a média destes números é maior ou não que 20.
#include <iostream>

int main() {
    float num1, num2, num3, media;
    
    printf("Digite três numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    media = (num1 + num2 + num3) / 3;
    
    if(media > 20)
        {
            printf("%.2f é maior que 20.", media);
        }
    else
        {
            printf("%.2f não é maior que 20.", media);
        }

    return 0;
}
