#include <iostream>

int main()
{

    int numero = 0;
    int iterador = 1;

    for (int i = 1; i <= 100; i++)
    {
        numero = numero + i;
    }

    std::cout << numero << std::endl;

    return 0;
}