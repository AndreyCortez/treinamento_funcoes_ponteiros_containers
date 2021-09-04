#include <iostream>
#include <stdio.h>
#include <profileapi.h>

// igual ao map, mas nao se importa de aramazenar
// as coisas em ordem alfabrtica
#include <unordered_map>

int main(int argc, char *argv)
{
    std::unordered_map<char *, int> map_1;
    std::unordered_map<float, int> map_2;
    std::unordered_map<std::string, int> map_3;

    map_1["one"] = 1;
    map_1["two"] = 2;
    map_1["three"] = 3;
    map_1["four"] = 4;

    map_2[0.1] = 1;
    map_2[0.2] = 2;
    map_2[0.3] = 3;
    map_2[0.4] = 4;

    map_3["one"] = 1;
    map_3["two"] = 2;
    map_3["three"] = 3;
    map_3["four"] = 4;

    for (auto &i : map_1)
    {
        std::cout << i.first << " = " << i.second << "\n";
    }

    std::cout << "\n";

    for (auto &i : map_2)
    {
        std::cout << i.first << " = " << i.second << "\n";
    }

    std::cout << "\n";

    for (auto &i : map_3)
    {
        std::cout << i.first << " = " << i.second << "\n";
    }

    return 1;
}