#include <iostream>

void somar(int A[], int M[], int n) {
    int c = 0;
    for (int i = n - 1; i >= 0; i--) {
        int soma = A[i] + M[i] + c;
        A[i] = soma % 2;
        c = soma / 2;
    }
}

void subtrair(int A[], int M[], int n) {
    int M_comp[32];
    int c = 1;
    for (int i = 0; i < n; i++) {
        M_comp[i] = M[i] == 0 ? 1 : 0;
    }
    for (int i = n - 1; i >= 0; i--) {
        int soma = M_comp[i] + c;
        M_comp[i] = soma % 2;
        c = soma / 2;
    }
    somar(A, M_comp, n);
}

void deslocamentoAritmetico(int A[], int Q[], int &Q_menos1, int n) {
    Q_menos1 = Q[n - 1];
    for (int i = n - 1; i > 0; i--) {
        Q[i] = Q[i - 1];
    }
    Q[0] = A[n - 1];
    for (int i = n - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
}

void algoritmoBooth(int multiplicando, int multiplicador, int n) {
    int M[32] = {0};
    int Q[32] = {0};
    int A[32] = {0};
    int Q_menos1 = 0;

    for (int i = n - 1; i >= 0; i--) {
        M[i] = (multiplicando >> (n - 1 - i)) & 1;
        Q[i] = (multiplicador >> (n - 1 - i)) & 1;
    }

    int contador = n;

    while (contador > 0) {
        int Q0 = Q[n - 1];

        if (Q0 == 1 && Q_menos1 == 0) {
            subtrair(A, M, n);
        } else if (Q0 == 0 && Q_menos1 == 1) {
            somar(A, M, n);
        }

        deslocamentoAritmetico(A, Q, Q_menos1, n);
        contador--;
    }

    std::cout << "Resultado em binario (A e Q): ";
    for (int i = 0; i < n; i++) std::cout << A[i];
    for (int i = 0; i < n; i++) std::cout << Q[i];
    std::cout << std::endl;
}

int main() {
    int multiplicando = 7;
    int multiplicador = -3;
    int bits = 8; 

    algoritmoBooth(multiplicando, multiplicador, bits);

    return 0;
}