#include <iostream>

int main()
{

    std::cout << "Digite o numero em questão: " << std::endl;
    int numero;
    std::cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}