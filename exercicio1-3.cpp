//Em um prêmio de loteria tivemos vários ganhadores. Faça um algoritmo que solicite ao usuário o valor 
//do prêmio da loteria e a quantidade de ganhadores deste concurso e calcule e imprima o valor que cada ganhador irá receber.
#include <iostream>

int main() {
    float premio, ganhadores, receber;
    
    printf("Digite o valor do premio: ");
    scanf("%f", &premio);
    printf("Digite a quantidade de ganhadores: ");
    scanf("%f", &ganhadores);
    
    receber = premio / ganhadores;
    
    printf("Cada ganhador receberá: %.2f", receber);
     
    return 0;
}
