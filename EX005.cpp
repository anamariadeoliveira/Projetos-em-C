// EX005 Escreva um programa que declare as variaveis, estas variaveis irão armazenar alguns valores. Calcular a
// distancia percorrida pelo carro e este resultado deverá ser armazenado em uma variavel pra que seja apresentado.//

#include <iostream>

int main()
{
    int km_inicial = 200000;
    int km_final = 207349;
    int distanciaPercorrida;
    distanciaPercorrida = km_final - km_inicial;

    
    printf("Distancia percorrida pelo carro foi de %d \n", distanciaPercorrida);

    return 0;


}

