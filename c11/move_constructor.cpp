#include <iostream>
#include <string>
using namespace std;

class Pessoa{
    public nome;
    // Cria um construtor que aceita um parâmetro
    // Como já existe construtor, o construtor padrão não
    // seria gerado automáticamente...
    Pessoa(string nome):nome(nome){};

    // Define um construtor de move.
    // Note que Pessoa&& é um rvalue! (graças ao &&)
    Pessoa(Pessoa&& p){
        nome = p.nome;
        p.nome = "";
    }

    // Define um assignment operator de move
    Pessoa& operator=(Pessoa&& p){
        if (this != &p){
            nome = p.nome;
            p.nome = "";
        }
    }
}

int main()
{
    return 0;
}