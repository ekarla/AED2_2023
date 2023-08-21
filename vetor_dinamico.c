#include "stdlib.h"
#include "vetordinamico.h"


struct vtrdin
{
    void* *elems;
    int tam;
    int posicao;
};


vtr_din* criar_vtr_dinamico(){
    vtr_din* vtr = malloc(sizeof(vtr_din));
    vtr->tam = 2;
    vtr->elems = malloc(sizeof(void*)*vtr->tam);
    vtr->posicao = 0;

    return vtr;
}

void* acessar_vtr_dinamico(vtr_din* vtr, int pos){
    if(pos < vtr->posicao){
        return vtr->elems[pos];
    }
    return NULL;
}

void inserir_vtr(vtr_din* vtr, int pos, void* elem){
    if(vtr->posicao == vtr->tam){
        vtr->tam = vtr->tam*2;
        vtr->elems = realloc(vtr-elems, sizeof(void*)*vtr->tam);
    }
    vtr->elems[vtr->posicao] = elem;

    vtr->posicao++;
}
