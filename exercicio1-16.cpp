//Elabore um algoritmo em C++ que calcule e retorne para o atendente de uma empresa de ônibus, 
//o tempo que o ônibus da sua empresa, que tem velocidade média de 90 quilômetros por hora, gasta para fazer o percurso. 
//Lembre-se que o usuário deve digitar a distância em quilômetros. 
//OBS: A fórmula para este cálculo é: D = V * T, onde D é distância, V é velocidade e T é tempo.
#include <iostream>

int main() {
    float d, v, t;
    
    printf("Digite quantos quilometros o ônibus irá percorrer: ");
    scanf("%f", &d);
    
    v = 90;
    t = d / v;
    
    printf("O tempo da viagem será %.2f horas.", t);
    
    return 0;
}
