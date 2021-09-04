#include <iostream>

// Declarar as variaveis A e B
// Somar em A soma B e multiplicar B por 2

void funcao_descrita(int* A, int* B)
{
    *A += *B;
    *B *= 2;
}

int main(int argc, char *argv)
{
    int A = 1;
    int B = 8;

    std::cout << "Antes: A = "<< A << ", B = " << B << std::endl;

    funcao_descrita(&A, &B);

    std::cout << "Depois: A = "<< A << ", B = " << B << std::endl;

    // Usando ponteiros podemos mudar valores de uma variavel dentro de um funcao
    // Essa algumas vezes pode ser uma boa alternativa ao retorno
    // Principalmente nos casos em que temos que mudar os valores de mais de uma variavel
}