//Elabore um algoritmo em C++ que deixe o usuário entrar com seu nome e as notas de trabalho lançadas pelo professor (este deve informar 3 notas com pontuação total / de 200, 300 e 500 /respectivamente) e calcule a média do aluno em porcentagem. O programa deve ter a seguinte saída:
//Caro <nome do aluno>, suas notas são as seguintes:
//Nota 1: 150 pontos em 200 pontos
//Nota 2 : 290 pontos em 300 pontos
//Nota 3 : 500 pontos em 500 pontos
//Total: 940 pontos em 1000 pontos, com média de 94,0%

#include <iostream>

int main() {
    char nome[50];
    float nota1, nota2, nota3, ponto1, ponto2, ponto3, totalAluno, totalGeral, media;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite suas notas respespectivamente: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    ponto1 = 200;
    ponto2 = 300;
    ponto3 = 500;
    totalGeral = 1000;
    
    totalAluno = nota1 + nota2 + nota3;
    media = (totalAluno * 100.0) / totalGeral; 
    
    printf("Caro %s, suas notas são as seguintes: \n Nota 1: %.0f pontos em %.0f pontos. \n Nota 2: %.0f pontos em %.0f pontos. \n Nota 3: %.0f pontos em %.0f pontos. \n Total: %.0f pontos em %.0f pontos, com media de %.1f%% .", nome, nota1, ponto1, nota2, ponto2, nota3, ponto3, totalAluno, totalGeral, media);
    
    
    return 0;
}
