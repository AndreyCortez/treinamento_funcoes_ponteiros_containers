#include <iostream>

// O que mais podemos fazer com ponteiros?

// O usuario vai dar a entrada de um numero A
// Devemos criar uma lista de tamanho A e preenche-la com  o inteiro 1

int main(int argc, char *argv)
{
    int A;
    std::cin >> A;

    // int lista[A];
    // Nao podemos declarar o tamanho de uma lista como uma varivel 
    // pois ao compilar o programa precisamos alocar esse espaco na memoria 
    // stack e precisamos saber o tamanho do chunk de memoria
    // a ser reservado ainda em tempo de compilacao

    int* lista = new int[A];
    // Famosa alocacao dinamica de memoria
    // Alocamos dinamicamente na memoria heap. Diferente da alocacao estatica
    // onde alocamos o espaco ainda em tempo de compilacao
    // agora estamos alocando durante o runtime o que permite que possamos usar uma variavel 
    // para definir o tamanho do chunk de memoria
    // Devemos ter cuidado ao usar isso, pois alocacao dinamica, por mais que economize o uso de memoria
    // acaba deixando o codigo mais lento (TLDR :: tente evitar usar alocacao dinamica dentro de while e for loops)

    for (int i = 0; i < A; i++)
    {
        lista[i] = 1;
    }

    for (int i = 0; i < A; i++)
    {
        std::cout << lista[i] << std::endl;
    }

    delete lista;
    // Ao terminar de usar o uma lista alocada dinamicamente, devemos retirar ela da memoria
    // caso contrario ela fica la, e uma hora ou outra vamos ter problemas com o uso de memoria do
    // nosso codigo
}