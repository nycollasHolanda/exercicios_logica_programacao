#include <iostream>

int main() {

  float numbers = 0;
  float total = 0;
  int dividendo = 0;

  while (numbers >= 0) {
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> numbers;

    if (numbers >= 0) {
      total = total + numbers;
      dividendo++;
    } else {
      std::cout << "FIM" << std::endl;
    }
  }

  std::cout << "O somatorio foi: " << total << std::endl;
  std::cout << "O total de valores passados foi: " << dividendo << std::endl;
  std::cout << "A media foi: " << total / dividendo << std::endl;

    return 0;
}