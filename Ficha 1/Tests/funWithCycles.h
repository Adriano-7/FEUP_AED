// AED 2022/2023 - Aula Pratica 01
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 18/09/2022]

#ifndef _FUNCYCLES_H_
#define _FUNCYCLES_H_

#include <vector>
#include <string>
#include <iostream>
#include <cctype>
#include <cmath>


using namespace std;

class FunWithCycles {
public:
    // Funcoes a implementar - exercicios base
    static bool palindrome(const string & s);
    static bool palindromeSentence(const string & s);
    static int nextInterestingNumber(int n, int sum);
    static int winter(const vector<int> & v);

    // Possiveis funcoes auxiliares
    static int digitSum(int n);

    // Funcoes a implementar - exercicios extra
    static int count(const vector<int> & v, int n);
    static bool hasDuplicates(const vector<int> & v);
    static void removeDuplicates(vector<int> & v);
    static vector<int> merge(const vector<int> & v1, const vector<int> & v2);

    static bool isPrime(int n);
    static vector<int> factorize(int n);
    static vector<int> listPrimes(int n);

    // Funcoes a implementar - exercicio de desafio
    static long long fastNextInterestingNumber(long long n, int sum);

};

#endif
