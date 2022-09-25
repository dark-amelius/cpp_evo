template<class T>
struct Holder
{
    Holder(T);
};
 
auto x = new Holder{1}; // Holder é inciado como Holder<int>
auto y = new Holder{"cat"}; // Holder é iniciado como Holder<String>

// Note que isso só funciona se a especificação de tipos entre
// angle-brackets for omitida! 