#include <iostream>
#include "sources.h"

int main()
{
    int i;
    while (std::cin >> i)
    {
        if (is_prime(i))
        {
            std::cout << i << " is a prime : True" << std::endl;
        }
        else
        {
            std::cout << i << " is a prime : False" << std::endl;
        }
    }
    return 0;
}
