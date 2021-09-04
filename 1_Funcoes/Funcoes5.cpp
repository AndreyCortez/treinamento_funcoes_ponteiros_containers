#include <iostream>

// determinar o maior numero entre 25 e 50
// determinar o maior numero entre 100 e 800
// determinar o maior numero entre 125 e 536

#define teto_entre_ab(a, b) (((a) > (b)) ? (a) : (b))

int main(int argc, char *argv)
{
    // maior numero entre 25 e 50
    std::cout << teto_entre_ab(25, 50) << std::endl;

    // maior numero entre 100 e 800
    std::cout << teto_entre_ab(100, 800) << std::endl;

    // maior numero entre 125 e 536
    std::cout << teto_entre_ab(125, 536) << std::endl;
}