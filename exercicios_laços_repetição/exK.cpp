#include <iostream>

int main() {

    unsigned long long graos = 1;
    unsigned long long fds = 0;

    for (int i = 1; i <= 64; i++) {
      if (i == 1) {
      std::cout << "================================ " << i << "° ================================" << std::endl;
      fds = fds + graos;
      std::cout << graos << std::endl;
      std::cout << fds << std::endl;
      } else {
      std::cout << "================================ " << i << "° ================================" << std::endl;
      graos = graos * 2;
      fds = fds + graos;
      std::cout << graos << std::endl;
      std::cout << fds << std::endl;
      }
    }

    return 0;
}