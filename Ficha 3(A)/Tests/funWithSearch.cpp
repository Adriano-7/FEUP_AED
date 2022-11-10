// AED 2022/2023 - Aula Pratica 03
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 02/10/2022]

#include "funWithSearch.h"
#include <climits>
#include <algorithm>
#include <numeric>

// ----------------------------------------------------------
// Exercicio 1: Pesquisa Elementar
// ----------------------------------------------------------
// TODO
int FunWithSearch::search(const vector<int> & v, int key) {
    int i = 0, j = v.size() - 1;
    while (i <= j) {
        int middle = i + (j - i) / 2;
        if (v[middle] < key) { i = middle+1; }
        else if (v[middle] > key) { j = middle-1; }
        else return middle;
    }
    return -1;
}
// ----------------------------------------------------------
// Exercicio 2: Limite Inferior
// ----------------------------------------------------------
// TODO
int FunWithSearch::lowerBound(const vector<int> &v, int key) {
    int begin = 0, j = v.size() - 1;

    while (begin < j) {
        int middle = begin + (j - begin) / 2;
        if(v[middle]>=key) {
            j=middle;
        }
        else{
            begin = middle+1;
        }
    }
    if(v[begin]<key){return -1;}
    return begin;
}

// ----------------------------------------------------------
// Exercicio 3: Intervalos
// ----------------------------------------------------------
// TODO
int FunWithSearch::countRange(const vector<int> & v, int a, int b) {
    int lower= lowerBound(v,a);
    if(lower==-1){return 0;}

    int upper= lowerBound(v, b+1);
    if(upper==-1){upper=v.size();}
    /*
     * if(upper==-1){upper=v.size()-1;}

    while((v.begin()+upper+1)!=v.end() && v[upper+1]==b){
        upper++;
    */
    return upper-lower;
}

// ----------------------------------------------------------
// Exercicio 4a: Viagem de mochila às costas (isPossible)
// ----------------------------------------------------------
// TODO
bool FunWithSearch::isPossible(const vector<int> & v, int x, int k) {
    int num_particions = 0;
    int sum = 0;

    for(int value : v){
        if(value>x){return false;}
        if(sum + value <= x){
            sum += value;
        }
        else{
            num_particions += 1;
            sum = value;
        }
    }
    num_particions++;
    return num_particions<=k;
}

// ----------------------------------------------------------
// Exercicio 4b: Viagem de mochila às costas (partitions)
// ----------------------------------------------------------
// TODO
int FunWithSearch::partitions(const vector<int> & v, int k) {
    int low = 1;
    int high = accumulate(v.begin(), v.end(), 0);
    while(low != high){
        int middle = low+(high-low)/2;
        if(isPossible(v, middle, k)){
            high=middle;
        }
        else{low=middle+1;}
    }
    return low;
}

// ----------------------------------------------------------
// Exercicio 5: Somas mais próximas
// ----------------------------------------------------------
// TODO
vector<int> FunWithSearch::closestSums(const vector<int> & v, const vector<int> & p) {
    vector<int> ans;
    return ans;
}

// ----------------------------------------------------------
// Exercicio 6: Jogo de strings
// ----------------------------------------------------------
// TODO
int FunWithSearch::stringGame(const string & a, const string & b, const vector<int> & p) {
    return 0;
}

// ----------------------------------------------------------
// Exercicio 7: Regras Quadriculadas
// ----------------------------------------------------------
// TODO
long long FunWithSearch::rules(int k, long long a, long long b) {
    return 0;
}