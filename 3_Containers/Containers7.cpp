#include <iostream>
#include <stdio.h>
#include <profileapi.h>

// um map se assemelha ao dicionario do phyton
// um nao limita seu index a inteiros
// podemos usar chars, strings, floats
// ou ate mesmo uma classe
#include <map>

int main(int argc, char *argv)
{
    std::map<char*, int> map_1;
    std::map<float, int> map_2;
    std::map<std::string, int> map_3;
    // o map guarda os valores do menor para o maior 
    // isso referente ao index

    map_1["one"] = 1;
    map_1["two"] = 2;
    map_1["three"] = 3;
    map_1["four"] = 4;

    map_2[0.1] = 1;
    map_2[0.2] = 2;
    map_2[0.3] = 3;
    map_2[0.4] = 4;

    std::string A = "One";
    std::string B = "Two";
    std::string C = "Three";
    std::string D = "Four";

    map_3[A] = 1;
    map_3[B] = 2;
    map_3[C] = 3;
    map_3[D] = 4;
    
    for (auto& i : map_1)
    {
        std::cout << i.first << " = " << i.second << "\n";
    }

    std::cout << "\n";

    for (auto& i : map_2)
    {
        std::cout << i.first << " = " << i.second << "\n";
    }
    
    std::cout << "\n";

    for (auto& i : map_3)
    {
        std::cout << i.first << " = " << i.second << "\n";
    }

    return 1;
}