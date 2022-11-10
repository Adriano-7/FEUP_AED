// AED 2022/2023 - Aula Pratica 03
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 02/10/2022]

#ifndef _FUNSEARCH_H_
#define _FUNSEARCH_H_

#include <vector>
#include <iostream>

using namespace std;

class FunWithSearch {
public:
    // Funcoes a implementar - exercicios base
    static int search(const vector<int> & v, int key);
    static int lowerBound(const vector<int> & v, int key);
    static int countRange(const vector<int> & v, int a, int b);
    static bool isPossible(const vector<int> & v, int x, int k);
    static int partitions(const vector<int> & v, int k);

    // Funcoes a implementar - exercicios extra
    static vector<int> closestSums(const vector<int> & v, const vector<int> & p);
    static int stringGame(const string & a, const string & b, const vector<int> & p);

    // Funcoes a implementar - exercicio de desafio
    static long long rules(int k, long long a, long long b);
};

#endif
