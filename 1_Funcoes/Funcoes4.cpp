#include <iostream>

// determinar o maior numero entre 25 e 50
// determinar o maior numero entre 100 e 800
// determinar o maior numero entre 125 e 536

// Somar os numeros resultantes

int teto_entre_ab(int a, int b)
{
    int resultado;

    if (a > b)
        resultado = a;
    else
        resultado = b;

    return resultado;
}

int main(int argc, char *argv)
{
    // maior numero entre 25 e 50
    int max1 = teto_entre_ab(25, 50);
    // maior numero entre 100 e 800
    int max2 = teto_entre_ab(100, 800);
    // maior numero entre 125 e 536
    int max3 = teto_entre_ab(125, 536);
    
    std::cout << max1 + max2 + max3 << std::endl;
}