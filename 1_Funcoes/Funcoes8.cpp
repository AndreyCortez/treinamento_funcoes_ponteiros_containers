#include <iostream>

// Determinar o setimo numero da sequencia de fibonacci
// 1 1 2 3 5 8 13

int fibonacci(int indice)
{
    // Define as condicoes iniciais da sequencia
    if (indice == 0 || indice == 1) return 1;

    // Trata o resto da logica com recursao
    else return fibonacci(indice - 1) + fibonacci(indice - 2);
}

int main(int argc, char *argv)
{
    // Setimo numero da sequencia
    std::cout << fibonacci(6) << std::endl;

    // Oitavo numero da sequencia
    std::cout << fibonacci(7) << std::endl;

    // Nono numero da sequencia
    std::cout << fibonacci(8) << std::endl;
}