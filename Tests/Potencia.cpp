//
// Created by salvadiaz on 11/10/18.
//

#include "Potencia.h"

unsigned int potencia (unsigned int base, unsigned int exp){
    if (exp == 0) return 1;
    return base * potencia(base, exp-1);
}