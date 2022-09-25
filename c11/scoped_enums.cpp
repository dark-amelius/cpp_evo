// Cria um Enum no estilo antigo
enum OldColors {RED=1, YELLOW=2, GREEN=3};

// Cria um Enum no estilo novo
enum class NewColors {RED, YELLOW, GREEN};

int main()
{
    OldColors o = OldColors::RED;
    NewColors n = NewColors::RED;
    
    // O compilador não reclama porque "o" é convertido para int
    // durante a comparação, o que é algo ruim!
    if(o == 0){
        // Faz algo
    }
    // O compilador reclama porque o novo tipo de enum não pode ser
    // convertido para int durante a comparação. Isso é bom, já queremos
    // comparar cores, e não cores com inteiros!
    if(n==0){
        // Faz algo
    }
    return 0;
}