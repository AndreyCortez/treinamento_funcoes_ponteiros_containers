#include <iostream>
#include <stdio.h>
#include <profileapi.h>

// Vetor funciona quase da mesma maneira que uma array
// mas o vector tem tamanho dinamico

#include <vector>

int main(int argc, char *argv)
{
    std::vector<int> container;
    // dentro do operador <> definimos o tipo e o tamanho do vector
    // caso quisesemos criar um vector de caracteres , por exemplo,
    // fariamos
    // std::vector<char>

    // O funcionamento interno do codigo abaixo nao vem ao caso no momento
    // mas em sintese ele escolhe um numero entre 1 e 6
    // armazena ese numero dentro do container
    // e retorna o tempo que esse armazenamento levou
    // bem como o deslocamento de cada elemento do container na memoria

    auto roll = []()
    { return rand() % 6 + 1; };

    LARGE_INTEGER StartingTime, EndingTime, ElapsedMicroseconds;
    LARGE_INTEGER Frequency;

    QueryPerformanceFrequency(&Frequency);
    QueryPerformanceCounter(&StartingTime);

    container.push_back(roll());
    const int *endereco_original = &(*container.begin());

    QueryPerformanceCounter(&EndingTime);
    ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
    ElapsedMicroseconds.QuadPart *= 1000000;
    ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;

    do
    {
        const int *endereco_zero = &(*container.begin());

        std::cout << "Armazenando " << container.size() << " elementos, levou " << ElapsedMicroseconds.QuadPart << "us\n";

        for (const auto &i : container)
        {
            const int *endereco_item_i = &i;
            int item_offset = endereco_item_i - endereco_zero;
            int original_item_offset = endereco_item_i - endereco_original;
            std::cout << " offset relativo ao endereco original: " << original_item_offset << " offset relativo ao zero do container: " << item_offset << " : Conteudo " << i << "\n";
        }

        QueryPerformanceCounter(&StartingTime);

        container.push_back(roll());

        QueryPerformanceCounter(&EndingTime);
        ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
        ElapsedMicroseconds.QuadPart *= 1000000;
        ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;

    } while (getc(stdin));

    return 1;
}