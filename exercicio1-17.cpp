//Faça um algoritmo em C++ que calcule e imprima a média aritmética de 3 números digitados pelo 
//usuário Antonio e a média aritmética de 3 números digitados pelo usuário Fabiana. Após este cálculo, 
//o sistema deve imprimir também soma das médias calculadas e a média destas médias.
#include <iostream>

int main() {
    float anum1, anum2, anum3, fnum1, fnum2, fnum3, amedia, fmedia, soma, mediaGeral;
    
    printf("Antonio, digite respectivamente três números: ");
    scanf("%f %f %f", &anum1, &anum2, &anum3);
    printf("Fabiana, digite respectivamente três números: ");
    scanf("%f %f %f", &fnum1, &fnum2, &fnum3);
    
    amedia = (anum1 + anum2 + anum3) / 3;
    fmedia = (fnum1 + fnum2 + fnum3) / 3;
    
    soma = amedia + fmedia;
    mediaGeral = soma / 2;
    
    printf("A media de Antonio é %.2f.", amedia);
    printf("\nA media de Fabiana é %.2f.", fmedia);
    printf("\nA soma de Antonio e Fabiana é %.2f.", soma);
    printf("\nA media de Antonio e Fabiana é %.2f.", mediaGeral);
    
    
    return 0;
}
