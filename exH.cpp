#include <iostream>
#include <cmath>

int main()
{

  int B, E;

  std::cout << "Digite o valor da base: " << std::endl;
  std::cin >> B;

  std::cout << "Digite o valor do esponente: " << std::endl;
  std::cin >> E;

  int base = B;

  std::cout << "=========================" << std::endl;

    for (int i = 1; i < E; i++)
    {
      base = base * B;
    }

    std::cout << base << std::endl;

    return 0;
}