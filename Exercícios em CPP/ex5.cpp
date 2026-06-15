#include <iostream>

int main() {

  std :: cout << "digite um valor de graus celcius" << std :: endl;
  double celcius;
  std :: cin >> celcius;

  double fahrenheit = celcius * 1.8 + 32;

  std :: cout << "essa é a temperatuira em Fahrenheit:" << fahrenheit << std :: endl;

  return 0;
}


