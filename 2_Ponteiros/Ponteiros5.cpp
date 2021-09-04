#include <iostream>

// O que mais podemos fazer com ponteiros?

// O usuario vai dar a entrada de dois numeros A e B
// Devemos criar uma matriz[A][B]
// preencher essa matriz com 1

int main(int argc, char *argv)
{
    int A;
    std::cin >> A;
    int B;
    std::cin >> B;

    int** matriz = new int*[A];

    for (int i = 0; i < A; i++)
    {
        matriz[i] = new int[B];
    }
    // para alocar uma matriz alocamos primeiro uma lista com ponteiros de inteiros
    // depois para cada item dessa lisa alocamos uma lista de inteiros

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            matriz[i][j] = 1;
        }
    }

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            std::cout << matriz[i][j] << ", ";
        }
        std::cout << std::endl;
    }

    delete matriz;
    // sempre deletar memoria alocada dps de usar
}