#include <iostream>

int main()
{

    int numbers;
    int fatorials = 0;
    int fatory = 0;

    for (int i = 1; i <= 15; i++)
    {
        std::cout << "Digite um numero: " << std::endl;
        std::cin >> numbers;

        if (numbers == 0)
        {
            fatory = 1;
        }
        else
        {
            for (int j = numbers; j >= 1; j--)
            {

                if (fatory == 0)
                {
                    fatory = j;
                }
                else
                {
                    fatory = fatory * j;
                }
            }
        }

        fatorials = fatorials + fatory;

        fatory = 0;

        std::cout << fatorials << std::endl;
        std::cout << "================================" << std::endl;
    }

    std::cout << fatorials << std::endl;

    return 0;
}