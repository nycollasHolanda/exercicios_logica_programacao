#include <iostream>
#include <fstream>

void criarArquivo()
{
    std::ofstream arquivo("agenda.txt");

    if (!arquivo.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo!\n";
        return;
    }

    arquivo << "NOMES - CONTATO \n";
    arquivo.close();
}

void adicionarDados()
{
    std::ofstream arquivo("agenda.txt", std::ios::app);

    std::string nomes;
    std::cout << "Digite um nome para adicionar: ";
    std::cin >> nomes;

    int contato;
    std::cout << "Digite um numero para adicionar: ";
    std::cin >> contato;

    std::cout << "\n \n";

    arquivo << nomes << "   " << contato << "\n";

    arquivo.close();
}

void imprimirDados()
{

    std::ifstream arquivo("agenda.txt"); // Abre o arquivo em modo leitura

    if (!arquivo.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo!\n";
    }

    std::string linha;
    while (std::getline(arquivo, linha))
    {
        std::cout << linha << std::endl;
    }

    std::cout << "\n \n";

    arquivo.close();
}

void encontrarContato()
{
    std::ifstream arquivo("agenda.txt");

    std::string cabecalho;
    std::getline(arquivo, cabecalho);

    std::string nomeBuscado;
    std::cout << "Digite o nome do contato que deseja procurar: ";
    std::cin >> nomeBuscado;

    std::string nome;
    int contato;

    while (arquivo >> nome >> contato)
    {
        if (nome == nomeBuscado)
        {
            std::cout << "Contato encontrado: "
                      << contato << '\n';
            return;
        }
    }

    std::cout << "Contato nao encontrado.\n";
}

void encontrarNome()
{
    std::ifstream arquivo("agenda.txt");

    std::string cabecalho;
    std::getline(arquivo, cabecalho);

    int contatoBuscado;
    std::cout << "Digite o contato do nome que deseja procurar: ";
    std::cin >> contatoBuscado;

    std::string nome;
    int contato;

    while (arquivo >> nome >> contato)
    {
        if (contato == contatoBuscado)
        {
            std::cout << "Nome encontrado: " << nome << '\n';
            return;
        }
    }

    std::cout << "Nome nao encontrado.\n";
}

int main()
{

    std::cout << "Você deseja: \nCriar agenda(1) \nAdicionar Dados(2) \nMostrar agenda(3) \nEncontrar contato(4) \nEncontrar nome(5) \nEncerrar ação(6) \n\n";

    int opcao;
    bool trueOrFalse = true;

    while (trueOrFalse)
    {
        std::cout << "Digite o alguma opção acima para proseguir: ";
        std::cin >> opcao;

        if (opcao == 1)
        {
            criarArquivo();
        }
        else if (opcao == 2)
        {
            adicionarDados();
        }
        else if (opcao == 3)
        {
            imprimirDados();
        }
        else if (opcao == 4)
        {
            encontrarContato();
        }
        else if (opcao == 5)
        {
            encontrarNome();
        }
        else if (opcao == 6)
        {
            trueOrFalse = false;
        }
        else
        {
            std::cout << "Opção invalida" << std::endl;
        }
    }

    return 0;
}
