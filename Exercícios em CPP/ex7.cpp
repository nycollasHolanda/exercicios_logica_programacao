#include <iostream>

int main() {

  std :: cout << "digite um valor" << std :: endl;
  double numero;
  std :: cin >> numero;

  std :: cout << "o valor com desconto é: " << numero-(numero*0.1) << std :: endl;

  return 0;
}