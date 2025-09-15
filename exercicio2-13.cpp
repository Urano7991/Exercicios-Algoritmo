//Faça um algoritmo em C++ que solicite 3 números e imprima se a média destes números é maior, menor ou igual ao primeiro número digitado.
#include <iostream>

int main() {
    int num, num2, num3, media, dobro;
    
    printf("Digite três numeros numero: ");
    scanf("%d %d %d", &num, &num2, &num3);
    
    media = (num + num2 + num3) / 3;
    dobro = num * 2;
    
    if(media > dobro) 
        {
            printf("%d é maior que o dobro de %d.", media, num);
        }
    else if(media < dobro)
        {
            printf("%d é menor que o dobro de %d", media, num);
        }
    else
        {
            printf("%d é igual ao dobro de %d", media, num);
        }
     
    return 0;
}
