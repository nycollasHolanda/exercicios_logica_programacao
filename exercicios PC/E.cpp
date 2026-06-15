#include <iostream>

using namespace std;

int main() {

    int matrizA[12];
    int matrizB[12];
    int matrizC[1][12];
    int valor;

    for (int i = 0; i <= 11; i++) {
      cout << "Digite um valor para " << i << " :" << endl;
      cin >> valor;
      matrizA[i] = valor;
      matrizB[i] = valor;
    }

    for (int i = 0; i <= 1; i++) {
      for (int j = 0; j <= 11; j++) {
        if (i == 0) {
          matrizC[i][j] = matrizA[j] * 2;
        } else {
          matrizC[i][j] = matrizB[j] - 5;
        }
      }
    }

      for (int i = 0; i <= 11; i++) {
        cout << "coluna A: " << matrizC[0][i] << " - coluna B: " << matrizC[1][i] << endl;
      }
    
    return 0;
}