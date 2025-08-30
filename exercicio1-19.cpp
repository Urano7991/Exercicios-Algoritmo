// O estádio Raimundo Sampaio, mais conhecido como Independência, está prestes a ser inaugurado, porém a 
//empresa que detém os direitos de uso do estádio criou uma regra de distribuição dos ingressos, onde estes 
//devem ser divididos entre o time mandante, o time visitante e os de cortesia. Escreva um algoritmo em C++ que 
//receba a quantidade de ingressos que serão disponibilizados em cada jogo e calcule e imprima a quantidade de ingressos 
//que será disponibilizado para cada parte. Sabemos que o time mandante terá direito a 7/9 destes ingressos, o time 
//visitante 3/4 do restante destes ingressos e os outros 1/4 serão de cortesia.
#include <iostream>

int main() {
    int ingressos, mandante, visitante, cortesia, restante;
    
    printf("Digite a quantidade de ingressos que serão disponibilizados: ");
    scanf("%d", &ingressos);
    
    mandante = (ingressos / 9) * 7;
    restante = ingressos - mandante;
    visitante = (restante / 4) * 3;
    cortesia = restante - visitante;
    
    printf("Ingressos mandante: %d \nIngressos visitante: %d \nIngressos cortesia: %d", mandante, visitante, cortesia);
    
    return 0;
}
