#include "Tests/Lista.h"
#include "Tests/Sumatoria.h"
#include "Tests/Potencia.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>


int main (int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}