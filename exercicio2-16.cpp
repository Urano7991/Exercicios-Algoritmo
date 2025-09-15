//Elabore um algoritmo em C++ que receba dois números e imprima se os dois são pares, os dois são impares, 
//se tem 1 impar e 1 par e se esta situação qual deles é impar e qual é par.

#include <iostream>

int main() {
    int num, num2;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &num, &num2);
    
    if((num % 2 == 0) && (num2 % 2 == 0)) 
        {
            printf("%d e %d são pares.", num, num2);
        }
    else if ((num % 2 == 0) && (num2 % 2 == 1))
        {
            printf("%d é par e %d é impar.", num, num2);
        }
    if ((num % 2 == 1) && (num2 % 2 == 1))
        {
            printf("%d e %d são impares.", num, num2);
        }
    else if ((num % 2 == 1) && (num2 % 2 == 0))
        {
            printf("%d é impar e %d é par.", num, num2);
        }
    return 0;
}
