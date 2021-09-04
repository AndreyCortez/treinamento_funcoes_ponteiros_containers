#include <iostream>

// Declarar a variavel A
// Declarar a variavel B como B = A
// Mudar o valor de A
// Comparar o valor de A com B

int main(int argc, char *argv)
{
    int A = 10;
    int B = A;

    A = 20;

    std::cout << "A = "<< A << std::endl;
    std::cout << "B = "<< B << std::endl;
    // Como fazer para que o valor de B mude de acordo com o valor de A?
}