#include <iostream>
#include <String>
using namespace std;

int main()
{
    // Cria uma variavel externa
    int x = 5;
    // Inicia um lambda, capturando a variavel "x".
    // Como temos um "&" na frente, a variavel é capturada
    // como referencia e pode ser modificada. Se omitirmos o &
    // ela não pode ser modificada!
    [&x](){
        // Note que os parametros estão vazios.
        for(;x<10:x++){
            // Podemos ler x já que ele foi capturado!
            cout<<x;
        }
    }(); // Invoca o lambda imediatamente.
    return 0;
}