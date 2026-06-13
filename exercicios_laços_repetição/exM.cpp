#include <iostream>

int main() {

  double valores;
  double somador = 0;

  for (int i = 1; i <= 10; i++) {
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> valores;

    somador = somador + valores;
  }

  std::cout << somador / 10 << std::endl;

    return 0;
}