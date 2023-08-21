#include "stdlib.h"
#include "vetordinamico.h"

struct dict_static{
    vtr_din* vtr;
};

typedef struct elemento
{
    int chave;
    void* carga;
}t_elemento;

t_elemento* criar_elem(int chave, void* carga){
    t_elemento *e = malloc(sizeof(t_elemento));
    e->chave = chave;
    e->carga = carga;
    return e;
}

void* busca_elem(t_elemento* de, int chave){
    //busca binaria
}