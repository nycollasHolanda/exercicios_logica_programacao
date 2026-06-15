#include <iostream>

using namespace std;

int main() {

    int matrizA[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++)
        {
            cout << "Guarde um valor em " << i << "x" << j << ": "; 
            cin >> matrizA[i][j];
            
        }
        cout << endl; 
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++)
        {
            cout << matrizA[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}