#include <iostream>
#include <string>
using namespace std;

// Função foo que não recebe nenhum argumento.
void foo(){
    cout << "end of list";
}

// Template que espera um tipo T e um pacote de tipos Ts
template<typename T, typename... Ts>
// Função que espera um argumento do tipo T e um pacote de tipos Ts
void foo(T head, Ts... tail){
    // Imprime o valor de head...
    cout << head;
    // Chama a função novamente, usando o pacote de argumentos
    // como novo argumento. O primeiro argumento do pacote vira Head
    // fazendo com que tail encolha por um.
    // Eventualmente o pacote estará vazio e a função foo() definida
    // acima será chamada, imprimindo "end of list".
    foo(tail...);
}