#include <iostream>

using namespace std;

int main() {

    int matrizA[4][2];
    int matrizB[4][2];

    int matrizC[4][2];

    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 2; j++)
        {
            matrizA[i][j] = 5; 
            matrizB[i][j] = 5;

            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 2; j++)
        {
            cout << matrizC[i][j] << " ";
            
        }
        cout << endl; 
    }

    return 0;
}