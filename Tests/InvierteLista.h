//
// Created by salvadiaz on 12/10/18.
//

#ifndef UNTITLED_INVIERTELISTA_H
#define UNTITLED_INVIERTELISTA_H

#include "Lista.h"

template<class T>
void invierte(Lista<T> *L, Lista<T> *LC) {
    if (LC->esVacia())
        return;
    L->insertarPrimero(LC->getDato(0));
    LC->remover(0);
    invierte(L, LC);
}


template<class T>
void fnInvierte(Lista<T> *L) {
    Lista<T> LC(*L);
    L->vaciar();
    invierte(L, &LC);
}




#endif //UNTITLED_INVIERTELISTA_H
