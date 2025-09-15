//Faça um algoritmo em C++ que receba dois números, se a média destes números for maior que 15 imprima o valor dos dois números e a frase “A média é maior que 15 !”, caso seja menor ou igual a 15, imprima a frase “A média não ultrapassou o valor de 15.”
#include <iostream>

int main() {
    float num1, num2, media;
    
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    
    media = (num1 + num2) /2;
    
    if(media > 15)
        {
            printf("%.2f %.2f \nA média é maior que 15.", num1, num2);
        }
    else
        {
            printf("%.2f %.2f \nA média não ultrapassou o valor de 15.", num1, num2);
        }

    return 0;
}
