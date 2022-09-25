#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Cria uma função foo. O tipo de retorno é inferido
// automáticamente. No caso, o tipo é vector<int>. Note como
// "auto" deixa o código mais enxuto.
auto foo(){
    vector<int> vec{1,2,3};
    return vec;
}

int main(){
    // Cria uma variavel do tipo v. O tipo é o mesmo tipo que é
    // retornado por foo. Portanto, será vector<int>. Novamente
    // economizamos espaço de código.
    auto v = foo();
    // Demonstra que v é um vetor.
    for(int i:v){
        cout << i << endl;
    }
    return 0;
}