#include <iostream>

int main() {

  std :: cout << "digite um numero" << std :: endl;
  int numero1;
  std :: cin >> numero1;

  int resto = numero1 % 2;

  if (resto == 0) {
    std :: cout << "é par" << std :: endl;
  } else {
      std :: cout << "é impar"<< std :: endl;
  };

  return 0;
}