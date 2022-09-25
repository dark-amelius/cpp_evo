template<typename T>
// Cria uma conceito tal que para os parametros
// "a" e "b" do tipo T...
concept HasSum = requires (T a, T b)
{
    // a expressão a+b compila.
    a + b;
};

// Grante que o tipo T satisfaz o requerimento HasSum. Apenas
// tipos que tem a soma implementada podem ser usados!
template<HasSum T>
void f(T){};