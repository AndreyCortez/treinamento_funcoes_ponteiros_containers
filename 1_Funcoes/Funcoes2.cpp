#include <iostream>

// Imprimir os numeros de 1 a 100
// Imprimir os numeros de 50 a 125
// Imprimir os numeros de 23 a 238

void imprimir_intervalo_ab(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        std::cout << i << std::endl;
    }
}

int main(int argc, char* argv)
{
    // Imprime os numeros de 1 a 100
    imprimir_intervalo_ab(1, 100);

    // Imprime os numeros de 50 a 125
    imprimir_intervalo_ab(50, 125);

    // Imprime os numeros de 23 a 238
    imprimir_intervalo_ab(23, 238);
}