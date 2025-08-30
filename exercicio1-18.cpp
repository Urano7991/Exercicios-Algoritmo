//Faça um algoritmo em C++ que receba uma temperatura em graus Celsius e transforme em Fahrenheit.
//A fórmula para este calculo é: F = ( 9 * C + 160 ) / 5
#include <iostream>

int main() {
    float c, f;
    
    printf("Digite a temperatura em graus Cº: ");
    scanf("%f", &c);
    
    f = (9 * c + 160) / 5;
    
    printf("%.1fºº Celsius em Fahrenheit é %.1fºº", c, f);
    
    
    return 0;
}
