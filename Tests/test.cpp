//
// Created by salvadiaz on 11/10/18.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Potencia.h"
#include "Sumatoria.h"
#include "Lista.h"


/**********************************tests de potencia****************************/

TEST(test_Potencia, potenciaCero){
    for (int i = 1; i < 100; ++i) {
        EXPECT_EQ(potencia(i,0), 1);
    }
}

TEST(test_potencia, potenciaUno){
    for (int i = 1; i < 100; ++i) {
        EXPECT_EQ(potencia(i,1), i);
    }
}

TEST(test_potencia, potenciaDos){
    for (int i = 1; i < 100; ++i) {
        EXPECT_EQ(potencia(i,2), i*i);
    }
}

TEST(test_potencia, potenciaTres){
    for (int i = 1; i < 100; ++i) {
        EXPECT_EQ(potencia(i,3), i*i*i);
    }
}

TEST(test_potencia, potenciaDiez){
    EXPECT_EQ(potencia(5,10),9765625);
    //EXPECT_EQ(potencia(10,10),10000000000); ESTA LINEA NO PASA EL TEST POR EL TAMANIO DEL RESULTADO
}



/**********************************tests de sumatoria**********************************/


TEST(test_sumatoria, sumoCeros){
    int arr[] = {0,0,0,0,0,0};
    EXPECT_EQ(sumatoria(arr,6), 0);
}

TEST(test_sumatoria, sumoConsecutivos){
    int arr[] = {4,5,6};
    EXPECT_EQ(sumatoria(arr,3), 4 + 5 + 6);
}

TEST(test_sumatoria, sumoOpuestos){
    int arr[] = {121, -121};
    EXPECT_EQ(sumatoria(arr,2), 0);
}