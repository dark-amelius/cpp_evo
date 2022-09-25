#include <iostream>
#include <numeric>
#include <string>
#include <vector>


// Fold Expression
template<typename... Args>
bool any(Args... args) { return (... || args); }
 
bool b = any(true, false, true, false);
// A expressão é expandida como (((true || false) || true) || false)
// E avaliada. 

// Accumulate
int sum(int x, int y){
    return x+y;
}

int main()
{
    // Gera um vetor para usarmos o fold
    auto a = vector<int>({1,2,3});
    // Acumula partindo do primeiro ao ultimo elemento,
    // tendo como valor incial 0 e usando a função sum
    // para realizar o fold.
    cout << accumulate(a.begin(), a.end(), 0, sum);
    return 0;
}
