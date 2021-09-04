#include <iostream>

// Declarar a variavel A
// Declarar a variavel B como B = A
// Mudar o valor de A
// Comparar o valor de A com B

int main(int argc, char *argv)
{
    int A = 10;

    int* B;     // ????????????
    B = &A;     // !?!?!?!?!?!!

    A = 20;

    std::cout << "A = "<< A << std::endl;
    std::cout << "*B = "<< *B << std::endl;

    // O que aconteceu?
    // int *B;
    // *B = equivale a um numero inteiro
    // B = o endereco de memoria onde esse numero esta armazenado
    // * = operador que retorna o valor contido naquele endereco de memoria

    // B = &A 
    // &A = endereco de memoria da variavel A
    // & = operador que retorna o endereco de memoria de uma variavel
    
    // Como eh a cara de um endereco de memoria?
    std::cout << "B = "<< B << std::endl;
    std::cout << "&A = "<< &A << std::endl;
}