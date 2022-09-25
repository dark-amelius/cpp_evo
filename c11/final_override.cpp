#include <iostream>
#include <string>
using namespace std;

class Pessoa{
    public nome;
    // Cria um construtor que aceita um parâmetro
    // Como já existe construtor, o construtor padrão não
    // seria gerado automáticamente...
    Pessoa(string nome):nome(nome){};

    // Gera uma função virtual f que imprime o nome 5 vezes
    virtual void f(){
        for(int i = 0; i < 5; i++){
            cout << nome << endl;
        }
    }
    // Gera uma função virtual g que imprime a sequencia 0,1,2,3,4.
    virtual void g(){
        for(int i = 0; i < 5; i++){
            cout << i << endl;
        }
    }
}

class Aluno : public Pessoa{
    public:
    // Usa o especificador override quando tentando
    // sobrescrever uma função, assim garantindo que a função
    // virtual existe.
    void f() override{
        for(int i = 0; i < 3; i++){
            cout << nome << endl;
        }
    }

    // Declara a implementação de g como final.
    // Classes derivadas de Aluno não podem sobrescreve-la!
    void g() final{
        cout << "42" << endl;
    }
}
int main()
{
    return 0;
}