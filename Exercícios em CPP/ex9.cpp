#include <iostream>

int main() {

  std :: cout << "digite um valor" << std :: endl;
  int numero;
  std :: cin >> numero;

  
  int sucessor = numero + 1;
  int antecessor = numero - 1;
  

  std :: cout << "Sucessor: " << sucessor << std :: endl;
  std :: cout << "antecessor: " << antecessor << std :: endl;

  return 0;
}
