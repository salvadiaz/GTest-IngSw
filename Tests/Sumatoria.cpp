//
// Created by salvadiaz on 12/10/18.
//

#include "Sumatoria.h"

unsigned int sumatoria (int *arr, unsigned int size){
    if (size == 0) return 0;
    return arr [size-1] + sumatoria(arr, size-1);
}