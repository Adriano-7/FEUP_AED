#ifndef SRC_FUNLISTP_H_
#define SRC_FUNLISTP_H_

#include <iostream>
#include <list>

using namespace std;

class FunListProblem{
public:
    FunListProblem();
    static list<int> removeHigher(list<int> &values, int x);
    static list<pair<int,int>> overlappingIntervals(list<pair<int,int>> values);
};

#endif