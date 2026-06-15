#include <iostream>

int main() {

  std :: cout << "Insira o valor do seu Salário:" << std :: endl;
  float salario;
  std :: cin >> salario;

  float salarioNovo = salario * 1.15;

  std :: cout << "Seu novo Salário é: " << salarioNovo << std :: endl;

  return 0;
}
