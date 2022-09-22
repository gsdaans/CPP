#include <iostream>
#include "sources.h"

int main()
{
    int i;
    int empty;
    while (std::cin >> empty)
    {
        std::cin >> i;
        std::cout << "I read " << i << '\n';
    }
    return 0;
}