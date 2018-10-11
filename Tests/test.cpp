//
// Created by salvadiaz on 11/10/18.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Potencia.h"


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