// EX006 Escrever um programa que armazene tres notas escolares de um aluno. Calcule a media e armazene
// em uma variavel. Apresente a media do aluno.


#include <iostream>

int main()
{
    float nota_1, nota_2, nota_3, media;
    nota_1 = 5.0;
    nota_2 = 4.5;
    nota_3 = 8.0;
    
    media = (nota_1 + nota_2 + nota_3)/3;

    printf("A media do aluno eh %.2f  \n", media);

     return 0;

}

