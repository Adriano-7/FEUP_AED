// AED 2022/2023 - Aula Pratica 03
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 02/10/2022]

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <fstream>
#include "funWithSearch.h"
#include "Timer.h"

using testing::Eq;


#define PRECISION 8 // precisão mostrada nas impressões de tempo

// Funções utilitárias para ler casos de testes
// (ver implementação no final do ficheiro Tests.cpp)
vector<int> readIntVector(ifstream & f);
vector<long long> readLongLongVector(ifstream & f);
vector<pair<int,int>> readIntPairVector(ifstream & f);


// ----------------------------------------------------------
// Exercicio 1: Pesquisa Elementar
// ----------------------------------------------------------
/*
TEST(test_1, examples) {
    cout << "Testando 'search'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(0, FunWithSearch::search({2,3,5,7,8}, 2));
    EXPECT_EQ(4, FunWithSearch::search({2,3,5,7,8}, 8));
    EXPECT_EQ(3, FunWithSearch::search({2,3,5,7,8}, 7));
    EXPECT_EQ(-1, FunWithSearch::search({2,3,5,7,8}, 1));
    EXPECT_EQ(-1, FunWithSearch::search({2,3,5,7,8}, 10));
    EXPECT_EQ(-1, FunWithSearch::search({2,3,5,7,8}, 6));
}

void testSearch(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    vector<int> v    = readIntVector(input);
    vector<int> keys = readIntVector(input);
    input.close();

    ifstream output(outputFile);
    vector<int> answers = readIntVector(output);
    output.close();

    cout << "  . Caso com n = " << v.size() << " e " << keys.size() << " perguntas" << endl;

    Timer::start(0);
    int nqueries = (int)keys.size();
    for (int i=0; i<nqueries; i++) {
        // Descomentar linha seguinte se quiser ver escrita pergunta a pergunta
        // cout << "     * chamar com k = " << keys[i] << " deve devolver " << answers[i] << endl;
        EXPECT_EQ(answers[i], FunWithSearch::search(v, keys[i]));
    }
    Timer::stop(0);
    cout << fixed << setprecision(PRECISION) << "    Tempo: " << Timer::elapsed(0) << " ms" << endl;
}

TEST(test_1, input01) {
    testSearch("search/input01.txt", "search/output01.txt");
}

TEST(test_1, input02) {
    testSearch("search/input02.txt", "search/output02.txt");
}

TEST(test_1, input03) {
    testSearch("search/input03.txt", "search/output03.txt");
}

TEST(test_1, input04) {
    testSearch("search/input04.txt", "search/output04.txt");
}

TEST(test_1, input05) {
    testSearch("search/input05.txt", "search/output05.txt");
}

*/
// ----------------------------------------------------------
// Exercicio 2: Limite Inferior
// ----------------------------------------------------------
/*
TEST(test_2, examples) {
    cout << "Testando 'lowerBound'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(0, FunWithSearch::lowerBound({2,2,2,3,5,5,8,8,8,8}, 2));
    EXPECT_EQ(6, FunWithSearch::lowerBound({2,2,2,3,5,5,8,8,8,8}, 8));
    EXPECT_EQ(4, FunWithSearch::lowerBound({2,2,2,3,5,5,8,8,8,8}, 5));
    EXPECT_EQ(0, FunWithSearch::lowerBound({2,2,2,3,5,5,8,8,8,8}, 1));
    EXPECT_EQ(4, FunWithSearch::lowerBound({2,2,2,3,5,5,8,8,8,8}, 4));
    EXPECT_EQ(-1, FunWithSearch::lowerBound({2,2,2,3,5,5,8,8,8,8}, 9));
}



void testLowerBound(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    vector<int> v    = readIntVector(input);
    vector<int> keys = readIntVector(input);
    input.close();

    ifstream output(outputFile);
    vector<int> answers = readIntVector(output);
    output.close();

    cout << "  . Caso com n = " << v.size() << " e " << keys.size() << " perguntas" << endl;

    int nqueries = (int)keys.size();
    for (int i=0; i<nqueries; i++) {
        // Descomentar linha seguinte se quiser ver escrita pergunta a pergunta
        // cout << "     * chamar com k = " << keys[i] << " deve devolver " << answers[i] << endl;
        EXPECT_EQ(answers[i], FunWithSearch::lowerBound(v, keys[i]));
    }
}


TEST(test_2, input01) {
    testLowerBound("lowerBound/input01.txt", "lowerBound/output01.txt");
}

TEST(test_2, input02) {
    testLowerBound("lowerBound/input02.txt", "lowerBound/output02.txt");
}

TEST(test_2, input03) {
    testLowerBound("lowerBound/input03.txt", "lowerBound/output03.txt");
}

TEST(test_2, input04) {
    testLowerBound("lowerBound/input04.txt", "lowerBound/output04.txt");
}

TEST(test_2, input05) {
    testLowerBound("lowerBound/input05.txt", "lowerBound/output05.txt");
}
*/
// ----------------------------------------------------------
// Exercicio 3: Intervalos
// ----------------------------------------------------------
/*
TEST(test_3, examples) {
    cout << "Testando 'countRange'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(10, FunWithSearch::countRange({2,2,2,3,5,5,8,8,8,8}, 1, 9));
    EXPECT_EQ(3, FunWithSearch::countRange({2,2,2,3,5,5,8,8,8,8}, 3, 5));
    EXPECT_EQ(2, FunWithSearch::countRange({2,2,2,3,5,5,8,8,8,8}, 4, 7));
    EXPECT_EQ(0, FunWithSearch::countRange({2,2,2,3,5,5,8,8,8,8}, 6, 7));
    EXPECT_EQ(0, FunWithSearch::countRange({2,2,2,3,5,5,8,8,8,8}, 1, 1));
}



void testCountRange(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    vector<int> v = readIntVector(input);
    vector<pair<int,int>> ranges = readIntPairVector(input);
    input.close();

    ifstream output(outputFile);
    vector<int> answers = readIntVector(output);
    output.close();


    cout << "  . Caso com n = " << v.size() << " e " << ranges.size() << " perguntas" << endl;

    int nranges = (int)ranges.size();
    for (int i=0; i<nranges; i++) {
        // Descomentar linha seguinte se quiser ver escrita pergunta a pergunta
        //cout << "     * chamar com [" << ranges[i].first << "," << ranges[i].second << "] deve devolver " << answers[i] << endl;
        EXPECT_EQ(answers[i], FunWithSearch::countRange(v, ranges[i].first, ranges[i].second));
    }
}


TEST(test_3, input01) {
    testCountRange("countRange/input01.txt", "countRange/output01.txt");
}

TEST(test_3, input02) {
    testCountRange("countRange/input02.txt", "countRange/output02.txt");
}

TEST(test_3, input03) {
    testCountRange("countRange/input03.txt", "countRange/output03.txt");
}

TEST(test_3, input04) {
    testCountRange("countRange/input04.txt", "countRange/output04.txt");
}

TEST(test_3, input05) {
    testCountRange("countRange/input05.txt", "countRange/output05.txt");
}

*/
// ----------------------------------------------------------
// Exercicio 4a: Viagem de mochila às costas (isPossible)
// ----------------------------------------------------------
/*
TEST(test_4a, examples) {
    cout << "Testando 'isPossible'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_TRUE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 21, 4));
    EXPECT_FALSE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 20, 4));
    EXPECT_TRUE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 22, 4));
    EXPECT_TRUE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 27, 3));
    EXPECT_FALSE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 26, 3));
    EXPECT_TRUE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 18,  5));
    EXPECT_FALSE(FunWithSearch::isPossible({7,9,3,8,2,2,9,4,3,4,7,9,9}, 17,  5));
}



TEST(test_4a, others) {
    cout << "Testando 'isPossible'" << endl;

    cout << "  . Outros casos de teste pequenos" << endl;
    EXPECT_FALSE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 16, 5));
    EXPECT_FALSE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 17, 5));
    EXPECT_TRUE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 18, 5));
    EXPECT_TRUE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 19, 5));
    EXPECT_TRUE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 20, 5));

    EXPECT_FALSE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 71, 1));
    EXPECT_TRUE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 72, 1));

    EXPECT_FALSE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 9, 10));
    EXPECT_TRUE(FunWithSearch::isPossible({10,4,5,8,9,7,1,10,10,8}, 10, 10));

    EXPECT_TRUE(FunWithSearch::isPossible({13,6,5,8,12,13,7,10,19,18,19,12,12,19,9,13,14,
                                           15,5,18,11,12,20,5,7,18,7,16,20,13,13,12,15,13,
                                           16,6,5,18,12,20,15,10,11,7,9,15,15,18,10,15}, 111, 6));
    EXPECT_FALSE(FunWithSearch::isPossible({13,6,5,8,12,13,7,10,19,18,19,12,12,19,9,13,14,
                                            15,5,18,11,12,20,5,7,18,7,16,20,13,13,12,15,13,
                                            16,6,5,18,12,20,15,10,11,7,9,15,15,18,10,15}, 110, 6));

    EXPECT_TRUE(FunWithSearch::isPossible({13,6,5,8,12,13,7,10,19,18,19,12,12,19,9,13,14,
                                           15,5,18,11,12,20,5,7,18,7,16,20,13,13,12,15,13,
                                           16,6,5,18,12,20,15,10,11,7,9,15,15,18,10,15}, 74, 9));
    EXPECT_FALSE(FunWithSearch::isPossible({13,6,5,8,12,13,7,10,19,18,19,12,12,19,9,13,14,
                                            15,5,18,11,12,20,5,7,18,7,16,20,13,13,12,15,13,
                                            16,6,5,18,12,20,15,10,11,7,9,15,15,18,10,15}, 73, 6));
}
*/

// ----------------------------------------------------------
// Exercicio 4a: Viagem de mochila às costas (partitions)
// ----------------------------------------------------------

TEST(test_4b, examples) {
    cout << "Testando 'partitions'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(21, FunWithSearch::partitions({7,9,3,8,2,2,9,4,3,4,7,9,9}, 4));
    EXPECT_EQ(27, FunWithSearch::partitions({7,9,3,8,2,2,9,4,3,4,7,9,9}, 3));
    EXPECT_EQ(18, FunWithSearch::partitions({7,9,3,8,2,2,9,4,3,4,7,9,9}, 5));
}



void testPartitions(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    vector<int> v = readIntVector(input);
    vector<int> k = readIntVector(input);
    input.close();

    ifstream output(outputFile);
    vector<int> answers = readIntVector(output);
    output.close();

    cout << "  . Caso com n = " << v.size() << " e " << k.size() << " perguntas" << endl;

    int nk = (int)k.size();
    for (int i=0; i<nk; i++) {
        // Descomentar linha seguinte se quiser ver escrita pergunta a pergunta
        // cout << "     * chamar com k = " << k[i] << " deve devolver " << answers[i] << endl;
        EXPECT_EQ(answers[i], FunWithSearch::partitions(v, k[i]));
    }
}


TEST(test_4b, input01) {
    testPartitions("partitions/input01.txt", "partitions/output01.txt");
}

TEST(test_4b, input02) {
    testPartitions("partitions/input02.txt", "partitions/output02.txt");
}

TEST(test_4b, input03) {
    testPartitions("partitions/input03.txt", "partitions/output03.txt");
}

TEST(test_4b, input04) {
    testPartitions("partitions/input04.txt", "partitions/output04.txt");
}

TEST(test_4b, input05) {
    testPartitions("partitions/input05.txt", "partitions/output05.txt");
}


// ----------------------------------------------------------
// Exercicio 5: Somas mais próximas
// ----------------------------------------------------------
/*
TEST(test_5, examples) {
    cout << "Testando 'closestSums'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    vector<int> answers = {8,51,39,20};
    EXPECT_EQ(answers, FunWithSearch::closestSums({12,3,17,5,34,33}, {1,51,41,21}));
}
*/

/*
void testClosestSums(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    vector<int> v = readIntVector(input);
    vector<int> p = readIntVector(input);
    input.close();

    ifstream output(outputFile);
    vector<int> answers = readIntVector(output);
    output.close();

    cout << "  . Caso com n = " << v.size() << " e " << p.size() << " perguntas" << endl;
    EXPECT_EQ(answers, FunWithSearch::closestSums(v, p));
}

TEST(test_5, input02) {
    testClosestSums("closestSums/input02.txt", "closestSums/output02.txt");
}

TEST(test_5, input03) {
    testClosestSums("closestSums/input03.txt", "closestSums/output03.txt");
}

TEST(test_5, input04) {
    testClosestSums("closestSums/input04.txt", "closestSums/output04.txt");
}

TEST(test_5, input05) {
    testClosestSums("closestSums/input05.txt", "closestSums/output05.txt");
}

TEST(test_5, input06) {
    testClosestSums("closestSums/input06.txt", "closestSums/output06.txt");
}

TEST(test_5, input07) {
    testClosestSums("closestSums/input07.txt", "closestSums/output07.txt");
}

TEST(test_5, input08) {
    testClosestSums("closestSums/input08.txt", "closestSums/output08.txt");
}
*/

// ----------------------------------------------------------
// Exercicio 6: Jogo de strings
// ----------------------------------------------------------
/*
TEST(test_6, examples) {
    cout << "Testando 'stringGame'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(3, FunWithSearch::stringGame("ababcba", "abb", {5,3,4,1,7,6,2}));
    EXPECT_EQ(4, FunWithSearch::stringGame("bbbabb", "bb", {1,6,3,4,2,5}));
}
*/

/*
void testStringGame(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    string a, b;
    input >> a >> b;
    int n = a.length();
    vector<int> p(n);
    for (int i=0; i<n; i++) input >> p[i];
    input.close();

    ifstream output(outputFile);
    int answer;
    output >> answer;
    output.close();

    cout << "  . Caso com string = " << a.size() << endl;
    EXPECT_EQ(answer, FunWithSearch::stringGame(a, b, p));
}


TEST(test_6, input01) {
    testStringGame("stringGame/input01.txt", "stringGame/output01.txt");
}


TEST(test_6, input02) {
    testStringGame("stringGame/input02.txt", "stringGame/output02.txt");
}

TEST(test_6, input03) {
    testStringGame("stringGame/input03.txt", "stringGame/output03.txt");
}

TEST(test_6, input04) {
    testStringGame("stringGame/input04.txt", "stringGame/output04.txt");
}

TEST(test_6, input05) {
    testStringGame("stringGame/input05.txt", "stringGame/output05.txt");
}

TEST(test_6, input06) {
    testStringGame("stringGame/input06.txt", "stringGame/output06.txt");
}

TEST(test_6, input07) {
    testStringGame("stringGame/input07.txt", "stringGame/output07.txt");
}

TEST(test_6, input08) {
    testStringGame("stringGame/input08.txt", "stringGame/output08.txt");
}
*/

// ----------------------------------------------------------
// Exercicio 7: Regras Quadriculadas
// ----------------------------------------------------------
/*
TEST(test_7, examples) {
    cout << "Testando 'rules'" << endl;

    cout << "  . Exemplos do enunciado" << endl;
    EXPECT_EQ(2, FunWithSearch::rules(3, 3, 7));
    EXPECT_EQ(4, FunWithSearch::rules(3, 1, 8));
    EXPECT_EQ(1, FunWithSearch::rules(2, 1, 1));
    EXPECT_EQ(5, FunWithSearch::rules(5, 27, 41));
    EXPECT_EQ(0, FunWithSearch::rules(4, 9, 12));
}
*/

/*
void testRules(const string & inputFile, const string & outputFile) {
    ifstream input(inputFile);
    int n;
    input >> n;
    vector<long long> k(n), a(n), b(n);
    for (int i=0; i<n; i++) input >> k[i] >> a[i] >> b[i];
    input.close();

    ifstream output(outputFile);
    vector<long long> answers = readLongLongVector(output);
    output.close();


    long long maxNum = 0, maxDiff = 0;
    for (int i=0; i<n; i++) {
        maxNum = max(maxNum, b[i]);
        maxDiff = max(maxDiff, b[i]-a[i]);
    }

    cout << "  . Caso com max number = " << maxNum << " e maxima diferenca = " << maxDiff << endl;

    int nanswers = (int)answers.size();
    for (int i=0; i<nanswers; i++) {
        // Descomentar linha seguinte se quiser ver escrita pergunta a pergunta
        //cout << "     * chamar com k = " << k[i] << "," << " a = " << a[i] << " e b = " << b[i] << endl;
        EXPECT_EQ(answers[i], FunWithSearch::rules(k[i], a[i], b[i]));
    }
}


TEST(test_7, input01) {
    testRules("rules/input01.txt", "rules/output01.txt");
}

TEST(test_7, input02) {
    testRules("rules/input03.txt", "rules/output03.txt");
}

TEST(test_7, input03) {
    testRules("rules/input03.txt", "rules/output03.txt");
}

TEST(test_7, input04) {
    testRules("rules/input04.txt", "rules/output04.txt");
}

TEST(test_7, input05) {
    testRules("rules/input05.txt", "rules/output05.txt");
}

TEST(test_7, input06) {
    testRules("rules/input06.txt", "rules/output06.txt");
}

TEST(test_7, input07) {
    testRules("rules/input07.txt", "rules/output07.txt");
}

TEST(test_7, input08) {
    testRules("rules/input08.txt", "rules/output08.txt");
}
TEST(test_7, input09) {
    testRules("rules/input09.txt", "rules/output09.txt");
}
*/


// ******************************************************************************

// ----------------------------------------------------------
// Ler casos de teste a partir de ficheiros
// ----------------------------------------------------------

// Ler um vetor de inteiros
vector<int> readIntVector(ifstream & f) {
    int n;
    f >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        f >> v[i];
    return v;
}

// Ler um vetor de long longs
vector<long long> readLongLongVector(ifstream & f) {
    int n;
    f >> n;
    vector<long long> v(n);
    for (int i=0; i<n; i++)
        f >> v[i];
    return v;
}

// Ler um vetor de pares de inteiros
vector<pair<int,int>> readIntPairVector(ifstream & f) {
    int n;
    f >> n;
    vector<pair<int,int>> v(n);
    for (int i=0; i<n; i++) {
        v[i] = pair<int, int>();
        f >> v[i].first >> v[i].second;
    }
    return v;
}
