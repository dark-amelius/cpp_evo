#include <iostream>
using namespace std;

int main()
{
    // automáticamente identifica x como int
    auto x = 5;
    // Define y como sendo o mesmo tipo que x
    decltype(x) y = x + 5;

    cout << typeid(y).name() << endl << typeid(x).name << endl;
    // Imprime 
    // > i
    // > i
    // identificando que tanto y quando x são do tipo inteiro.
}