// AED 2022/2023 - Aula Pratica 02
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 25/09/2022]

#include "funWithComplexity.h"

// ----------------------------------------------------------
// Exercicio 4: Sequencias
// ----------------------------------------------------------
// TODO
/*    1ºTentativa O(n^3)
int FunWithComplexity::maxSubArray(const vector<int> & v) {
    unsigned n = v.size();
    int maxSoFar = v[0]; // porque é esta uma boa escolha para a melhor soma inicial?
    for (unsigned i=0; i<n; i++) // todas as posicoes iniciais possiveis
        for (unsigned j=i; j<n; j++) { // todas as posicoes finais possiveis
            int sum = 0;
            for (unsigned k=i; k<=j; k++) // calcular soma entre posicoes i e j
                sum += v[k];
            // neste momento sum é a soma dos elementos no intervalo [i,j]
            if (sum > maxSoFar) maxSoFar = sum;
        }
    return maxSoFar;
}
*/
/* 2ºTentativa O(n^2)
int FunWithComplexity::maxSubArray(const vector<int> & v) {
    unsigned n = v.size();
    int maxSoFar = v[0]; // porque é esta uma boa escolha para a melhor soma inicial?
    for (unsigned i=0; i<n; i++){
        int sum = 0;
        for (unsigned j=i; j<n; j++) { // todas as posicoes finais possiveis
            sum += v[j];
            // neste momento sum é a soma dos elementos no intervalo [i,j]
            if (sum > maxSoFar) maxSoFar = sum;
        }
    }
    return maxSoFar;
}
*/
int FunWithComplexity::maxSubArray(const vector<int> & v) {
    unsigned n = v.size();
    int maxSoFar = v[0];
    int maxEndingHere = v[0];
    for (unsigned i=1; i<n; i++){
        maxEndingHere += v[i];
        if(maxEndingHere < v[i]) {maxEndingHere=v[i];}
        if(maxSoFar<maxEndingHere) {maxSoFar = maxEndingHere;}
        }
    return maxSoFar;
}

// ----------------------------------------------------------
// Exercicio 5: Analisando um rio
// ----------------------------------------------------------
// TODO
int FunWithComplexity::river(const vector<int> & v, int k, int t) {
    int result=0;
    int Qa=0;
    bool is_a=v[0]-t>=0;

    //Initialize Qa
    for(int i=0; i<k; i++){
        if(v[i]-t>=0){Qa++;}
    }
    //Inicializar o result
    if(Qa>=k/2.0){result++;}

    for(int i=1; i<=v.size()-k; i++){
        if(is_a){Qa--;}
        if(v[i+k-1]-t>=0){Qa++;}

        is_a=v[i]-t>=0;

        if(Qa>=k/2.0){result++;}
    }
    return result;
}

// ----------------------------------------------------------
// Exercicio 6: Espiral de Números
// ----------------------------------------------------------
// TODO
pair<int, int> FunWithComplexity::spiral(int n) {
    pair<int, int> ans = {0, 0};
    return ans;
}

// ----------------------------------------------------------
// Exercicio 8: Caderno Quadriculado
// ----------------------------------------------------------
// TODO
long long FunWithComplexity::gridSum(int a, int b) {
    return 0;
}