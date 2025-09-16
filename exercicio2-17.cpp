//. Faça um algoritmo em C++ que solicite a quantidade de cascos de refrigerante o dono de um bar tem em seu estoque e retorne a ele quantos engradados de 
//24 garrafas ele precisa comprar para que ele armazene todas as suas garrafas (o último engradado pode ficar com espaços vazios de garrafas)
#include <iostream>

int main() {
    int casco, engradado;
    
    printf("Digite a quantidade de cascos: ");
    scanf("%d", &casco);
    
    engradado = casco  / 24;
    
    if (casco % 24 !=0)
        {
        engradado += 1;
        }
        
        printf("Você precisará de %d engradados.", engradado);
    

    return 0;
}
