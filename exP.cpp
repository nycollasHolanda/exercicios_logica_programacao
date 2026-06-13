#include <iostream>

int main()
{

    float valores = 0;
    int divisor = 0;

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            valores = valores + i;
            divisor++;
        }
    }

    std::cout << "Total: " << valores << std::endl;
    std::cout << "Media: " << valores / divisor << std::endl;

    return 0;
}