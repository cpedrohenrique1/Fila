#include "fila.h"

namespace Pedro{
    Fila::Fila(int tamanho):
        tamanho(0),
        array(0),
        inicio(-1),
        fim(-1),
        quantidadeElementos(0)
    {
        if (tamanho <= 0)
            throw QString("Tamanho de vetor invalido");
        try{
            array = new int[tamanho];
            this->tamanho = tamanho;
        }catch(std::bad_alloc &erro){
            throw QString("Nao foi possivel criar vetor");
        }
    }

    Fila::~Fila()
    {
        if(array){
            delete[] array;
            array = nullptr;
        }
    }

    bool Fila::estaVazia()const
    {
        return !((bool)quantidadeElementos);
    }

    bool Fila::estaCheio() const
    {
        return (quantidadeElementos == tamanho);
    }
}


