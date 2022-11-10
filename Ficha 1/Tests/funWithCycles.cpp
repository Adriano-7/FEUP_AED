// AED 2022/2023 - Aula Pratica 01
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 18/09/2022]

#include <set>
#include <numeric>
#include <cstring>
#include "funWithCycles.h"

// ----------------------------------------------------------
// Exercicio 1: Palindromos
// ----------------------------------------------------------
// TODO
//Θ(n/2) being n the number of characters in string s
bool FunWithCycles::palindrome(const std::string & s) {
    for(unsigned i = 0; i<s.size()/2; i++){
        unsigned pair = s.size()-1-i;
        if(s[i] != s[pair]){return false;}
    }
    return true;
}

// ----------------------------------------------------------
// Exercicio 2: Frases Palindromo
// ----------------------------------------------------------
// TODO
//Θ(n/2) + Θ(m) being n the number of alpha characters in s and m the number of characters in s
bool FunWithCycles::palindromeSentence(const std::string & s) {
    std::string vanilla = "";
    for(const char ch: s){ if((ch >= 'a' && ch<= 'z') || (ch >= 'A' && ch<= 'Z')){vanilla.push_back(tolower(ch));}}
    return palindrome(vanilla);
}

// ----------------------------------------------------------
// Exercicio 3: Numeros Interessantes
// ----------------------------------------------------------
// TODO
int FunWithCycles::nextInterestingNumber(int n, int sum) {
    n++;
    while(digitSum(n) != sum){ n++;}
    return n;
}

// Esta funcao auxiliar devera devolver a soma dos digitos de n
// TODO
//Θ(n) being n the number of digits in n
int FunWithCycles::digitSum(int n) {
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

// ----------------------------------------------------------
// Exercicio 4: O Inverno esta a chegar
// ----------------------------------------------------------
// TODO
//Θ(n) being n the number of elements in the vector v
int FunWithCycles::winter(const vector<int> & v) {
    int final = 0;
    int contestant = 0;
    for(int i = 1; i<v.size(); i++){
        if(v[i] < v[i-1]){contestant++;}
        else{
            if(contestant>final){final=contestant;}
            contestant=0;
        }
    }
    if(contestant>final){final=contestant;}
    return final;
}


// ----------------------------------------------------------
// Exercicio 5: Brincando com vectores
// ----------------------------------------------------------

// a) count
// TODO
//Θ(n) being n the number of values in v
int FunWithCycles::count(const vector<int> & v, int n) {
    unsigned result = 0;
    for(int element: v){if(element==n){result++;}}
    return result;
}

// b) hasDuplicates
// TODO
bool FunWithCycles::hasDuplicates(const vector<int> & v) {
    std::set<int> elements;
    for(int element: v){
        if(elements.find(element) == elements.end()){elements.insert(element);}
        else{return true;}
    }
    return false;
}

// c) removeDuplicates
// TODO
void FunWithCycles::removeDuplicates(vector<int> & v) {
    std::set<int> elements;
    for (auto it = v.begin(); it != v.end();)
    {
        if (elements.find(*it)==elements.end()){
            elements.insert(*it);
            it++;}
        else
            it = v.erase(it);
    }
}

// d) merge
// TODO
vector<int> FunWithCycles::merge(const vector<int> & v1, const vector<int> & v2) {
    vector<int> ans;
    return ans;
}

// ----------------------------------------------------------
// Exercicio 6: Brincando com numeros primos
// ----------------------------------------------------------

// a) isPrime
// TODO
bool FunWithCycles::isPrime(int n) {
    for(int i= 2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

// b) factorize
// TODO
vector<int> FunWithCycles::factorize(int n) {
    vector<int> ans;
    return ans;
}

// c) listPrimes
// TODO
vector<int> FunWithCycles::listPrimes(int n) {
    vector<int> ans;

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true){
            for (int i=p*p; i<=n; i += p) //Qualquer múltiplo de um primo não é primo
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
        if (prime[p])
            ans.push_back(p);
    return ans;
}


// ----------------------------------------------------------
// Exercicio 7: Numeros interessantes (versao desafio)
// ----------------------------------------------------------
// TODO
long long FunWithCycles::fastNextInterestingNumber(long long n, int sum) {
    return 0;
}
