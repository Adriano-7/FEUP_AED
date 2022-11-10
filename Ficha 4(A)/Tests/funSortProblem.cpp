#include "funSortProblem.h"
#include <algorithm>
#include <limits.h>

FunSortProblem::FunSortProblem() {}


//-----------------------------------------------------------------

// TODO

bool lessthen(Product &prodct1, Product &product2){
    if(prodct1.getPrice()==product2.getPrice()){
        return prodct1.getWeight()<product2.getWeight();
    }
    return prodct1.getPrice()<product2.getPrice();
}

void FunSortProblem::expressLane(vector<Product> &products, unsigned k) {
    if(products.size()<k){ return;}
    sort(products.begin(), products.end(), lessthen);
    products.erase(products.begin()+k, products.end());
    return;
}

// TODO
int FunSortProblem::minDifference(const vector<unsigned> &values, unsigned nc) {
    if(nc>values.size()) return -1;

    vector<unsigned > vsorted = values;
    sort(vsorted.begin(), vsorted.end());

    int min_diff=vsorted[nc-1]-vsorted[0];
    for(int i = 0; i<= vsorted.size()-nc; i++){
        int diff = vsorted[i+nc-1]-vsorted[i];
        if(diff<min_diff) min_diff=diff;
    }

    return min_diff;
}


// TODO
unsigned FunSortProblem::minPlatforms (const vector<float> &arrival, const vector<float> &departure) {
    vector<float> arrivals = arrival;
    vector<float> departures = departure;

    sort(arrivals.begin(), arrivals.end());
    sort(departures.begin(), departures.end());

    int i_a = 0; int i_d = 0;
    unsigned max_plataforms = 0;
    unsigned plataforms = 0;

    while(i_a<arrivals.size() && i_d <departures.size()){
        if(arrivals[i_a]<=departures[i_d]){
            plataforms++;i_a++;
            if(plataforms> max_plataforms) max_plataforms=plataforms;
        }
        else if(arrivals[i_a]>departures[i_d]){
            plataforms--;i_d++;
        }
    }
    return  max_plataforms;
}

//TODO












unsigned FunSortProblem::numInversions(vector <int> v) {
}

// TODO
void FunSortProblem::nutsBolts(vector<Piece> &nuts, vector<Piece> &bolts) {
}

