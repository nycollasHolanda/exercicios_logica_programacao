/**#include <iostream>

using namespace std;

int main() {

    int matrizA[3][4];
    int matrizB[3][4];

    for (int i = 0; i <= 3; i++) {
      for (int j = 0; j <= 4; j++) {
        cout << "Digite um valor pra " << i << "x" << j << endl;
        cin >> matrizA[i][j];
        matrizB[i][j] = matrizA[i][j];
      }
    }

    for (int i = 0; i <= 3; i++) {
      for (int j = 0; j <= 4; j++) {
        cout << matrizB[i][j] << "  ";
      }
      cout << endl;
    }
    
    return 0;
} */