// AED 2022/2023 - Aula Pratica 02
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 25/09/2022]

#ifndef _FUNCOMPLEXITY_H_
#define _FUNCOMPLEXITY_H_

#include <vector>
#include <iostream>

using namespace std;

class FunWithComplexity {
public:
    // Funcoes a implementar - exercicios base
    static int maxSubArray(const vector<int> & v);
    static int river(const vector<int> & v, int k, int t);
    static pair<int, int> spiral(int n);
    static long long gridSum(int a, int b);
};

#endif
