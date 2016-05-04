#ifndef CALCULATION_H_INCLUDED
#define CALCULATION_H_INCLUDED

#include <vector>
#include <iostream>

using namespace std;

class Calculation{
public:
    Calculation();
    ~Calculation();
    int Limit (vector <int> played);
    vector <int> Legal (vector <int> played, double limit);
    string Print_Legal (vector <int> legal);
    bool Game_Over(vector <int> legal, int WhoMove);

};

#endif // CALCULATION_H_INCLUDED
