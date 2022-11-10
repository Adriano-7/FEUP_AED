#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <benchmark/benchmark.h>

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    benchmark::Initialize(&argc, argv);
    std::cout << "AED 2022/2023 - Aula Pratica 5" << std::endl;
    int res = RUN_ALL_TESTS();

    //NOTA: retirar comentarios de BENCHMARKs respetivos no final do ficheiro 'tests.cpp' para verificar complexidade
    benchmark::RunSpecifiedBenchmarks();
    return 0;
}