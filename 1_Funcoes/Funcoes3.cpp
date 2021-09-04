#include <iostream>

// determinar o maior numero entre 25 e 50
// determinar o maior numero entre 100 e 800
// determinar o maior numero entre 125 e 536

// Somar os numeros resultantes

int main(int argc, char *argv)
{
    // maior numero entre 25 e 50
    int A = 50;
    int B = 25;
    int resultado1;

    if (A > B)
        resultado1 = A;
    else
        resultado1 = B;

    // maior numero entre 25 e 50
    A = 100;
    B = 800;
    int resultado2;

    if (A > B)
        resultado2 = A;
    else
        resultado2 = B;

    // maior numero entre 25 e 50
    A = 125;
    B = 536;
    int resultado3;

    if (A > B)
        resultado3 = A;
    else
        resultado3 = B;

    std::cout << resultado1 + resultado2 + resultado3 << std::endl;
}