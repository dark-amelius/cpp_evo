// Usando trailing return types para inferir tipo
template <typename Lhs, typename Rhs>
// Note o decltype após a declaração dos parâmetros
// lhs e rhs já são valores conhecidos pelo compilador
auto add(const Lhs& lhs, const Rhs& rhs) -> decltype(lhs + rhs){
    return lhs + rhs;
}


// Sem usar trailing return types
template<typename Lhs, typename Rhs>
// Agora usamos os valores do template Lhs e Rhs em vez
// dos nomes dos parâmetros lhs, rhs
// mas para tal precisamos usar declval para converter
// os tipos parametrizados para tipos que declvalue entede!
decltype(std::declval<Lhs>() + std::declvale<Rhs>()) add(const Lhs& lhs, const Rhs& rhs) {
    return lhs + rhs;
}

//Exemplo pego de https://blog.petrzemek.net/2017/01/17/pros-and-cons-of-alternative-function-syntax-in-cpp/