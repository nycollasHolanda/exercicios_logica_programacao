#include <iostream>
#include <vector>

using namespace std;

void senhaDeAcesso()
{

    int valorUsuario = 1234;
    int valorSenha = 9999;

    int entradaUsuario;
    cout << "Digite o codigo de usuario: ";
    cin >> entradaUsuario;

    int entradaSenha;

    if (entradaUsuario == valorUsuario)
    {
        cout << "Digite a senha: ";
        cin >> entradaSenha;

        if (entradaSenha == valorSenha)
        {
            cout << "Acesso permitido.";
        }
        else
        {
            cout << "Senha incorreta";
        }
    }
    else
    {
        cout << "Usuário inválido!";
    }
}

void encontrar()
{
    vector<int> A;
    int valorX;
    bool achou = false;

    cout << "Digite o valor X: ";
    cin >> valorX;

    for (int i = 0; i < 10; i++)
    {
        int valor;
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> valor;
        A.push_back(valor);
    }

    for (int i = 0; i < 10; i++)
    {
        if (A[i] == valorX)
        {
            cout << "ACHEI na posicao " << i << endl;
            achou = true;
        }
    }

    if (!achou)
    {
        cout << "NAO ACHEI" << endl;
    }
}

void fatorialParOuImpar()
{
    int fatorial;
    cout << "Digite o valor: ";
    cin >> fatorial;

    int parada = fatorial;

    cout << fatorial;

    for (int j = 1; j < parada; j++) {
        fatorial = fatorial * j;
    }


    if (fatorial%2 == 0) {
        cout << "Fatorial é par" << endl;
        cout << fatorial;
    } else {
        cout << "Fatorial é impar" << endl;
        cout << fatorial;
     }

}

void diagonalMatriz()
{
    int matrizA[10][10];
    int matrizB[10][10];
    int somador = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrizA[i][j] = rand() % 20 + 1;
            matrizB[i][j] = rand() % 20 + 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        somador += matrizA[i][i];
    }

    for (int i = 0; i < 10; i++) {
        int j = 9 - i;
        if (matrizB[i][j] < 10) {
            matrizB[i][j] = 0;
        }
    }

    cout << "===================  MATRIZ A  ===================" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "===================  MATRIZ B  ===================" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "=================================================" << endl;
    cout << somador << endl;
}




int main()
{

    // senhaDeAcesso();
    // encontrar();
    // fatorialParOuImpar();
    diagonalMatriz();

    return 0;
}