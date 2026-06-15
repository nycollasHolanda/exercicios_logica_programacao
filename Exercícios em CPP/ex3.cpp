#include <iostream>

int main() {
    
  std :: cout << "digite a nota 1" << std :: endl;
  double numero1;
  std :: cin >> numero1;

  std :: cout << "digite a nota 2" << std :: endl;
  double numero2;
  std :: cin >> numero2;
  
  std :: cout << "digite a nota 3" << std :: endl;
  double numero3;
  std :: cin >> numero3;

  std :: cout << "digite a nota 4" << std :: endl;
  double numero4;
  std :: cin >> numero4;

  double media = (numero1 + numero2 + numero3 + numero4)/4;

  std :: cout << "sua media foi: " << media << std :: endl;

  return 0;
}