// AED 2022/2023 - Aula Pratica 02
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 25/09/2022]

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <fstream>
#include "funWithComplexity.h"
#include "Timer.h"

using testing::Eq;

#define PRECISION 8 // precisão mostrada nas impressões de tempo

// Funções utilitárias para ler casos de testes de ficheiros
// (ver implementação no final do ficheiro Tests.cpp)
vector<int> readIntVector(string fileName);
int readInt(string fileName);
vector<int> readIntVectorAnd2Int(string fileName, int & k, int &t);

// ----------------------------------------------------------
// Exercicio 4: Sequencias
// ----------------------------------------------------------
/*
TEST(test_4, examples) {
    cout << "Testando 'maxSubArray'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(7, FunWithComplexity::maxSubArray({-1, 4, -2, 5, -5, 2, -20, 6}));
    EXPECT_EQ(-1, FunWithComplexity::maxSubArray({-2, -1, -3}));
    EXPECT_EQ(30, FunWithComplexity::maxSubArray({2, 4, 6, 8, 10}));
}

TEST(test_4, n10) {
    cout << "  . Caso com n = 10" << endl;
    Timer::start(0);
    EXPECT_EQ(readInt("maxsubarray/output01.txt"), FunWithComplexity::maxSubArray(readIntVector("maxsubarray/input01.txt")));
    Timer::stop(0);
    cout << fixed << setprecision(PRECISION) << "    Tempo: " << Timer::elapsed(0) << " s" << endl;
}

TEST(test_4, n100) {
    cout << "  . Caso com n = 100" << endl;
    Timer::start(0);
    EXPECT_EQ(readInt("maxsubarray/output02.txt"), FunWithComplexity::maxSubArray(readIntVector("maxsubarray/input02.txt")));
    Timer::stop(0);
    cout << fixed << setprecision(PRECISION) << "    Tempo: " << Timer::elapsed(0) << " s" << endl;
}

TEST(test_4, n1000) {
    cout << "  . Caso com n = 1 000" << endl;
    Timer::start(0);
    EXPECT_EQ(readInt("maxsubarray/output03.txt"), FunWithComplexity::maxSubArray(readIntVector("maxsubarray/input03.txt")));
    Timer::stop(0);
    cout << fixed << setprecision(PRECISION) << "    Tempo: " << Timer::elapsed(0) << " s" << endl;
}


TEST(test_4, n10000) {
    cout << "  . Caso com n = 10 000" << endl;
    Timer::start(0);
    EXPECT_EQ(readInt("maxsubarray/output04.txt"), FunWithComplexity::maxSubArray(readIntVector("maxsubarray/input04.txt")));
    Timer::stop(0);
    cout << fixed << setprecision(PRECISION) << "    Tempo: " << Timer::elapsed(0) << " s" << endl;
}


TEST(test_4, n100000) {
    cout << "  . Caso com n = 100 000" << endl;
    Timer::start(0);
    EXPECT_EQ(readInt("maxsubarray/output05.txt"), FunWithComplexity::maxSubArray(readIntVector("maxsubarray/input05.txt")));
    Timer::stop(0);
    cout << fixed << setprecision(PRECISION) << "    Tempo: " << Timer::elapsed(0) << " s" << endl;
}

*/
// ----------------------------------------------------------
// Exercicio 5: Analisando um rio
// ----------------------------------------------------------

TEST(test_5, examples) {
    cout << "Testando 'river'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(3, FunWithComplexity::river({142,155,147,165,150,112,73}, 3, 150));
    EXPECT_EQ(4, FunWithComplexity::river({5,10,12,10,9,14,5,7,9,11,3,3}, 4, 10));
}



TEST(test_5, others_small) {
    int t, k;

    cout << "  . Outros casos pequenos" << endl;
    vector<int> v1 = readIntVectorAnd2Int("river/input01.txt", t, k);
    EXPECT_EQ(readInt("river/output01.txt"), FunWithComplexity::river(v1, t, k));
    vector<int> v2 = readIntVectorAnd2Int("river/input02.txt", t, k);
    EXPECT_EQ(readInt("river/output02.txt"), FunWithComplexity::river(v2, t, k));
    vector<int> v3 = readIntVectorAnd2Int("river/input03.txt", t, k);
    EXPECT_EQ(readInt("river/output03.txt"), FunWithComplexity::river(v3, t, k));
}



TEST(test_5, others_large) {
    int t, k;

    cout << "  . Outros casos grandes" << endl;
    vector<int> v1 = readIntVectorAnd2Int("river/input08.txt", t, k);
    EXPECT_EQ(readInt("river/output08.txt"), FunWithComplexity::river(v1, t, k));
    vector<int> v2 = readIntVectorAnd2Int("river/input09.txt", t, k);
    EXPECT_EQ(readInt("river/output09.txt"), FunWithComplexity::river(v2, t, k));
}


// ----------------------------------------------------------
// Exercicio 6: Espiral de Números
// ----------------------------------------------------------
/*
TEST(test_6, examples) {
    cout << "Testando 'spiral'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    pair<int, int> p1 = {-1, -1};
    EXPECT_EQ(p1, FunWithComplexity::spiral(5));
    pair<int, int> p2 = {2, 2};
    EXPECT_EQ(p2, FunWithComplexity::spiral(25));
    pair<int, int> p3 = {1, -1};
    EXPECT_EQ(p3, FunWithComplexity::spiral(3));
}
*/

/*
TEST(test_6, others_small) {
    cout << "  . Outros casos pequenos" << endl;
    pair<int, int> p1 = {-1, 1};
    EXPECT_EQ(p1, FunWithComplexity::spiral(7));
    pair<int, int> p2 = {-2, -2};
    EXPECT_EQ(p2, FunWithComplexity::spiral(17));
    pair<int, int> p3 = {3, -2};
    EXPECT_EQ(p3, FunWithComplexity::spiral(30));
    pair<int, int> p4 = {-11, 7};
    EXPECT_EQ(p4, FunWithComplexity::spiral(503));
}
*/

/*
TEST(test_6, others_large) {
    cout << "  . Outros casos grandes" << endl;
    pair<int, int> p1 = {499, 499};
    EXPECT_EQ(p1, FunWithComplexity::spiral(998001));
    pair<int, int> p2 = {1682, 15811};
    EXPECT_EQ(p2, FunWithComplexity::spiral(1000000000));
}
*/

// ----------------------------------------------------------
// Exercicio 8: Caderno Quadriculado
// ----------------------------------------------------------

/*
TEST(test_8, examples) {
    cout << "Testando 'gridSum'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(358, FunWithComplexity::gridSum(13, 51));
    EXPECT_EQ(160, FunWithComplexity::gridSum(5, 31));
    EXPECT_EQ(143, FunWithComplexity::gridSum(28, 44));
    EXPECT_EQ(7480, FunWithComplexity::gridSum(25, 245));
}
*/

/*
TEST(test_8, others_small) {
    cout << "  . Outros casos pequenos" << endl;
    EXPECT_EQ(278, FunWithComplexity::gridSum(131, 147));
    EXPECT_EQ(257, FunWithComplexity::gridSum(22, 67));
    EXPECT_EQ(73, FunWithComplexity::gridSum(18, 31));
    EXPECT_EQ(82, FunWithComplexity::gridSum(12, 30));
    EXPECT_EQ(116, FunWithComplexity::gridSum(116, 116));
    EXPECT_EQ(332, FunWithComplexity::gridSum(157, 175));
    EXPECT_EQ(307, FunWithComplexity::gridSum(89, 116));
    EXPECT_EQ(581, FunWithComplexity::gridSum(48, 123));
    EXPECT_EQ(260, FunWithComplexity::gridSum(49, 82));
    EXPECT_EQ(860, FunWithComplexity::gridSum(105, 185));
}
*/

/*
TEST(test_8, others_large) {
    cout << "  . Outros casos grandes" << endl;
    EXPECT_EQ(15395874831770160ll, FunWithComplexity::gridSum(275107939, 625086360));
    EXPECT_EQ(27071915783418025ll, FunWithComplexity::gridSum(215299244, 684720683));
    EXPECT_EQ(18717502645457847ll, FunWithComplexity::gridSum(107454973, 491658519));
}
*/


// ******************************************************************************

// ----------------------------------------------------------
// Ler casos de teste a partir de ficheiros
// ----------------------------------------------------------

vector<int> readIntVector(string fileName) {
    ifstream f(fileName);
    int n;
    f >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        f >> v[i];
    f.close();
    return v;
}

int readInt(string fileName) {
    ifstream f(fileName);
    int n;
    f >> n;
    return n;
}

vector<int> readIntVectorAnd2Int(string fileName, int & k, int &t) {
    ifstream f(fileName);
    int n;
    f >> n >> k >> t;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        f >> v[i];
    f.close();
    return v;
}
