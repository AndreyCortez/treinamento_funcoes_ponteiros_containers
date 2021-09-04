#include <iostream>

// Determinar o setimo numero da sequencia de fibonacci
// 1 1 2 3 5 8 13

// Lista que vai ser usada para armazenar os valores de fibbonaci
int lista[100];

void preencher_fibonacci(int indice)
{
    // Preencher as condicoes iniciais
    lista[0] = 1;
    lista[1] = 1;

    for (int i = 2; i < indice; i++)
    {
        lista[i] = lista[i - 1] + lista[i - 2];
    }
}

int main(int argc, char *argv)
{
    preencher_fibonacci(100);

    // Setimo numero da sequencia
    std::cout << lista[6] << std::endl;

    // Oitavo numero da sequencia
    std::cout << lista[7] << std::endl;

    // Nono numero da sequencia
    std::cout << lista[8] << std::endl;
}