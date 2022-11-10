#include "funListProblem.h"
#include <algorithm>

FunListProblem::FunListProblem() {}


//-----------------------------------------------------------------

// TODO
list<int> FunListProblem::removeHigher(list<int> &values, int x) {
    list<int> l1;

    list<int>::iterator itr = values.begin();
    list<int>::iterator itre = values.end();

    while(itr != itre){
        if(*itr>x){
            l1.push_back(*itr);
            itr = values.erase(itr);
        }
        else{
            itr++;
        }
    }
    return l1;
}

//TODO

bool lessthan(pair<int, int> p1, pair<int, int> p2){
    if(p1.first==p2.first){return p1.second<p2.second;}
    return p1.first<p2.first;
}

list<pair<int,int>> FunListProblem::overlappingIntervals(list<pair<int,int>> values) {
    list<pair<int,int>> res;
    values.sort(lessthan);

    for(auto p: values){
        if(res.size()>0 && res.back().second >= p.first){
            res.back().second=std::max(p.second, res.back().second);
        }
        else{
            res.push_back(p);
        }
    }

    return res;
}
