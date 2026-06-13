#include <iostream>

int main()
{

    int fatorial = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j > 0; j--)
            {
                if (fatorial == 0)
                {
                    fatorial = fatorial + i;
                }
                else
                {
                    fatorial = fatorial * j;
                }
            }

            std::cout << fatorial << std::endl;
            std::cout << "====================================" << std::endl;
            fatorial = 0;
        }
    }

    return 0;
}