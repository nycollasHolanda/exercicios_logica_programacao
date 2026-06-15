#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double> numeros;
    double total = 0;

    cout << "Digite os 100 tempos:\n";
    for (int i = 0; i < 100; i++) {
        double valorLido;
        cin >> valorLido;
        numeros.push_back(valorLido);
        total = total + numeros[i];
    }

    double media = total / 100.0; 
    
    for (int j = 0; j < 100; j++) {
        if (numeros[j] > media * 1.15) {
            cout << "Indice [" << j << "] = " << numeros[j] << " [GARGALO CRÍTICO]" << endl;
        } else if (numeros[j] < media * 0.85) {
            cout << "Indice [" << j << "] = " << numeros[j] << " [superprodução instável]" << endl;
        }
    }

    return 0;
}