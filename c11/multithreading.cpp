#include <iostream>
#include <string>
#include <vector>
#include <thread>
using namespace std;

// Declara uma função que conta de 0 a 100.
auto foo(){
    for(int i = 0; i < 100; i++){
        cout << "i" << i << endl;
    }
}

// Declara uma função que conta de 100 a 0
auto bar(){
    for(int j = 100; j > 0; j--){
        cout << "j" << j << endl;
    }
}

int main(){
    // inicia foo em uma nova thread chamada up.
    thread up (foo);
    // inicia bar em uma nova thread chamada down
    thread down (bar);
    // Espera up terminar
    up.join();
    // Espera down terminar
    down.join();
    return 0;
}