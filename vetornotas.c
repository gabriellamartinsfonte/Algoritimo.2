#include <stdio.h>

int main (){

    int notas[15];
    int soma = 0;
    float media;

    for(int i = 0; i < 15; i++){
        printf("Digite a nota de um dos alunos: ");
        scanf("%d", &notas[i]);

        soma = soma + notas[i];
    }


    media = soma/15;

    printf("A media das notas dos 15 alunos e: %lf", media);





}
