#include <iostream>
#include <string>
using namespace std;

int main(){
    int x = 5;
    // Cria um lambda que aceita um parâmetro do tipo w.
    // O tipo é descoberto automáticamente o lambda é implementado
    // por um template.
    auto fun = [&x](auto w){
        for(;x<10;x++){
            cout<<x;
        }
        cout << endl;
        // Retorna um valor do tipo w! Nós não sabemos qual
        // tipo é. Ele é descoberto usando as regras de inferência
        // de tipos para templates!
        return w;
    };
    // Aqui o lambda retorna o inteiro 5.
    cout << fun(5) << endl;
    // Aqui o mesmo lambda retorna a string "The Yellow Sign".
    cout << fun("The Yellow Sign") << endl;
}