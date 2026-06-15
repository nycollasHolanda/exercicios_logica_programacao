#include <iostream>

int main() {

  std :: cout << "digite o valor do Raio" << std :: endl;
  double raio;
  std :: cin >> raio;

  double area = 3.14159 * raio*raio;

  std :: cout << "o valor da area é: " << area << std :: endl;

  return 0;
}