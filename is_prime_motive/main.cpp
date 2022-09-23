#include <iostream>
#include "source.h"

bool is_prime(int i)
{
    if (i == 1)
    {
        return true;
    }
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int i;
    int empty;
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
