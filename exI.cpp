#include <iostream>
#include <cmath>

int main()
{

  int valorUm = 0;
  int valorDois = 1;

  int Fn = valorUm;

    for (int i = 1; i <= 15; i++) {
      
      std::cout << "Colocação " << i << "°; " << valorUm << std::endl;
      Fn = valorUm + valorDois;
      valorUm = valorDois;
      valorDois = Fn;  
    }

    return 0;
}