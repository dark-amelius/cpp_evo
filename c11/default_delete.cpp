#include <iostream>
#include <string>
using namespace std;

class Pessoa{
    public nome;
    // Cria um construtor que aceita um parâmetro
    // Como já existe construtor, o construtor padrão não
    // seria gerado automáticamente...
    Pessoa(string nome):nome(nome){};

    // Força o compilador a gerar o construtor padrão
    Pessoa() = default;

    // Bloqueia o uso do construtor de cópia
    // e e do copy-assignment operator
    Pessoa(const Pessoa&) =delete;
    Pessoa& operator=(const Pessoa&) =delete;
}

int main()
{
    // Gera uma pessoa com nome sendo string de tamanho 0
    // causado pelo construtor padrão.
    Pessoa p;
    // Gera uma pessoa com nome sendo "Chambers"
    Pessoa q{"Chambers"};
    return 0;
}