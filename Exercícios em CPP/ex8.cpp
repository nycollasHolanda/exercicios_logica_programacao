#include <iostream>

int main() {

  int valorA = 2;
  int valorB = 3;
  int caixa;

  std :: cout << "Antes da troca:" << std :: endl;
  std :: cout << "valor de A:" << valorA << std :: endl;
  std :: cout << "valor de B:" << valorB << std :: endl;

  caixa = valorA;
  valorA = valorB;
  valorB = caixa;
  
  std :: cout << "Depois da troca:" << std :: endl;
  std :: cout << "valor de A:" << valorA << std :: endl;
  std :: cout << "valor de B:" << valorB << std :: endl;

  return 0;
}


//8. Crie um programa que troque os valores de duas variáveis A e B.