#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int M;
    cout << "Digite o valor de M:" << endl;
    cin >> M;

    double total = 0;
    vector<double> pecas;

    if ((M > 0) && (M <= 50)) {
        for (int i = 0; i < M; i++) { 
            double valorLido;
            cin >> valorLido;
            pecas.push_back(valorLido);
            total = total + valorLido;
        }

        double media = total / M;

        double somaDesvios = 0;
        for (int i = 0; i < M; i++) {
            somaDesvios += pow(pecas[i] - media, 2);
        }
        double desvioPadrao = sqrt(somaDesvios / (M - 1));

        double LSC = media + (2 * desvioPadrao);
        double LIC = media - (2 * desvioPadrao);

        vector<bool> alertas;
        int totalDefeituosas = 0;

        for (int i = 0; i < M; i++) {
            if (pecas[i] > LSC || pecas[i] < LIC) {
                alertas.push_back(true);
                totalDefeituosas++;
            } else {
                alertas.push_back(false);
            }
        }

        double porcentagemRejeicao = ((double)totalDefeituosas / M) * 100;

        cout << "Pecas defeituosas: " << totalDefeituosas << endl;
        cout << "Porcentagem de rejeicao: " << porcentagemRejeicao << "%" << endl;

    } else {
        cout << "Numero invalido" << endl;
    }

    return 0;
}