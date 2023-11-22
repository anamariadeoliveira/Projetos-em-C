// EX007.Escrever um programa que calcule o valor do volume de uma lata de azeite de forma cilíndrica.
// O programa deve utilizar a formula volume = 3.14159 * raio² + altura, atribua valores para as variaveis
//  raio e altura.


#include <iostream>

int main()
{
    float volume, raio, altura;

    raio = 3.57;
    altura = 10;


    volume = 3.14159 * raio * raio * altura;

    printf("O volume calculado foi: %.2f\n", volume);



   



    return 0;
}


