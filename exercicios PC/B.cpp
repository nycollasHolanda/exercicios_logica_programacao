#include <iostream>

using namespace std;

int main() {

    int matrizA[6][0];
    int matrizB[6][0];

    int matrizC[6][1];

    for (int i = 0; i <= 6; i++) {
            matrizA[i][0] = 5; 
            matrizB[i][0] = 6;
    }

    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j <= 1; j++)
        {

            matrizC[i][0] = matrizA[i][0];
            matrizC[i][1] = matrizB[i][0];
            cout << matrizC[i][j] << " ";
            
        }
        cout << endl; 
    }

    return 0;
}