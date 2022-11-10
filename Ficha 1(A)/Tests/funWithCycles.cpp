// AED 2022/2023 - Aula Pratica 01
// Pedro Ribeiro (DCC/FCUP) [ultimo update: 18/09/2022]

#include "funWithCycles.h"
#include <cctype>
#include <algorithm>

// ----------------------------------------------------------
// Exercicio 1: Palindromos
// ----------------------------------------------------------
// TODO
bool FunWithCycles::palindrome(const std::string & s) {
    for(unsigned i = 0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]){return false;}
    }
    return true;
}

// ----------------------------------------------------------
// Exercicio 2: Frases Palindromo
// ----------------------------------------------------------
// TODO
bool FunWithCycles::palindromeSentence(const std::string & s) {
    std::string curated = "";
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){curated.push_back(tolower(s[i]));}
    }
    for(int i = 0; i<curated.size()/2; i++){
        if(curated[i]!=curated[curated.size()-i-1]){return false;}
    }
    return true;
}

// ----------------------------------------------------------
// Exercicio 3: Numeros Interessantes
// ----------------------------------------------------------
// TODO
int FunWithCycles::nextInterestingNumber(int n, int sum) {
    n += 1;
    while(digitSum(n) != sum){
        n++;
    }
    return n;
}

// Esta funcao auxiliar devera devolver a soma dos digitos de n
// TODO
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
int FunWithCycles::winter(const vector<int> & v) {
    int contiguous = 0;
    int contestent = 0;

    for(int i=1; i<v.size(); i++){
        if(v[i]-v[i-1]>=0){
            if(contestent>contiguous){contiguous = contestent;}
            contestent = 0;
        }
        else{
            contestent++;
        }
    }
    if(contestent>contiguous){contiguous=contestent;}
    return contiguous;
}


// ----------------------------------------------------------
// Exercicio 5: Brincando com vectores
// ----------------------------------------------------------

// a) count
// TODO
int FunWithCycles::count(const vector<int> & v, int n) {
    int occur = 0;
    for(int value: v){if(value==n){occur++;}}
    return occur;
}

// b) hasDuplicates
// TODO
bool FunWithCycles::hasDuplicates(const vector<int> & v) {
    for(int i = 0; i<v.size(); i++){
        for(int j = i+1; j<v.size(); j++){
            if(v[i]==v[j]){return true;}
        }
    }
    return false;
}

// c) removeDuplicates
// TODO
void FunWithCycles::removeDuplicates(vector<int> & v) {
    vector<int> nv;
    for(int value : v){
        if(std::find(nv.begin(), nv.end(), value) == nv.end()){
            nv.push_back(value);
        }
    }
    v=nv;
}

// d) merge
// TODO
vector<int> FunWithCycles::merge(const vector<int> & v1, const vector<int> & v2) {
    vector<int> ans;
    auto ptr1 = v1.begin();
    auto ptr2 = v2.begin();

    while(ptr1 != v1.end() && ptr2 != v2.end()){
        if(*ptr1 <= *ptr2){ans.push_back(*ptr1);ptr1++;}
        else{ans.push_back(*ptr2);ptr2++;}
    }
    while (ptr1 != v1.end()) {ans.push_back(*ptr1);ptr1++;}
    while (ptr2 != v2.end()) {ans.push_back(*ptr2);ptr2++;}
    return ans;
}

// ----------------------------------------------------------
// Exercicio 6: Brincando com numeros primos
// ----------------------------------------------------------

// a) isPrime
// TODO
bool FunWithCycles::isPrime(int n) {
    for(int i = 2; i<n; i++){if(n%i==0){return false;}}
    return true;
}

// b) factorize
// TODO
vector<int> FunWithCycles::factorize(int n) {
    vector<int> ans;
    int p = 2;
    while(n>1){
        if(n%p==0){ans.push_back(p); n/=p;}
        else{p++;}
    }
    return ans;
}

// c) listPrimes
// TODO
vector<int> FunWithCycles::listPrimes(int n) {
    vector<int> ans;
    vector<bool> is_prime(n+1, true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2; i*i<=n; i++){
        if(is_prime[i]){
            for(int j = i*i; j<=n; j+=i){is_prime[j]=false;}
        }
    }
    for(int i =0; i<=n; i++){
        if(is_prime[i]==true){ans.push_back(i);}
    }
    return ans;
}


// ----------------------------------------------------------
// Exercicio 7: Numeros interessantes (versao desafio)
// ----------------------------------------------------------
// TODO
long long FunWithCycles::fastNextInterestingNumber(long long n, int sum) {
    return 0;
}
