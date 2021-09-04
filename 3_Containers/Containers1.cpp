#include <iostream>

// As arrays fundamentais vistas anteriormente foram herdadas do C
// e sao muito rudimentares, para facilitar nossa vida
// o c++ tem uma serie de estruturas de dados embutidas chamadas de containers
// que podemos usar para evitarmos de ter que mexer diretamente com a memoria

// Vamos comecar com o std::array para isso inclua no codigo
#include <array>

int main(int argc, char *argv)
{
    std::array<int, 5> A = {1, 4, 6, 8, 10};
    // A array funciona como um bloco de memoria que guarda uma quantidade
    // fixa de dados, nao podendo ser incrementada nem decrementada
    // por isso temos que definir um tamanho pra ela ainda em tempo de compilacao

    for (int i = 0; i < A.size(); i++)
        std::cout << A[i] << std::endl;

    // Tanto a array quanto os outros containers que veremos pela frente terao
    // metodos embutidos que nos dao informacoes como o seu tamanho
}