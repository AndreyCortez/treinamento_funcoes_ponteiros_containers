#include <iostream>

// Determinar o setimo numero da sequencia de fibonacci
// 1 1 2 3 5 8 13

int main(int argc, char *argv)
{
    // Cacula i(n) de acordo a regra da sequencia com n E [1, 7] 
    int i1 = 1;

    int i2 = 1;

    int i3 = i1 + i2;

    int i4 = i3 + i2;

    int i5 = i4 + i3;

    int i6 = i5 + i4;

    int i7 = i6 + i5;

    std::cout << i7 << std::endl; 
}