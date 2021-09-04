#include <iostream>
#include <stdio.h>
#include <profileapi.h>

// o set funciona de uma maneira diferente de tudo que ja vimos ate agr
// quando um set recebe um dado, ele armazena esse dado apenas se 
// nao houver nenhum equivalente a ele dentro do set

#include <set>

int main(int argc, char *argv)
{
    std::set<int> container;
    // imaginando o seguinte set {1, 2, 4}
    // colocando set.insert(3) o set ficaria assim {1, 2, 3, 4}
    // mas se colocassemos set.insert(2) ao inves de {1, 2, 2, 4}
    // continuariamos com {1, 2, 4}
    // o set nao aceita elementos repetidos e ele armazena os elementos em ordem crescente

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

    container.insert(roll());
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

        container.insert(roll());

        QueryPerformanceCounter(&EndingTime);
        ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart;
        ElapsedMicroseconds.QuadPart *= 1000000;
        ElapsedMicroseconds.QuadPart /= Frequency.QuadPart;

    } while (getc(stdin));

    return 1;
}