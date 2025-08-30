//Faça um algoritmo em C++ que receba uma temperatura em graus Celsius e transforme em Fahrenheit.
//A fórmula para este calculo é: F = ( 9 * C + 160 ) / 5
#include <iostream>

int main() {
    float c, f;
    
    printf("Digite a temperatura em graus ºC: ");
    scanf("%f", &c);
    
    f = (9 * c + 160) / 5;
    
    printf("%.0f graus Celsius em Fahrenheit é %.0f graus", c, f);
    
    
    return 0;
}
