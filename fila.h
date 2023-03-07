#ifndef FILA_H
#define FILA_H
#include <QString>

namespace Pedro{
    class Fila
    {
    private:
        int tamanho;
        int *array;
        int inicio;
        int fim;
        int quantidadeElementos;
    public:
        Fila(int tamanho);
        ~Fila();
        bool estaVazia()const;
        bool estaCheio()const;
        int getQuantidadeElementos();
    };
}


#endif // FILA_H
