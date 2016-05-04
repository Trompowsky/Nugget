#include <iostream>
#include <string>
#include <stdlib.h>     /* atoi */
#include <vector>
#include <math.h>       /* ceil */
#include "Move.h"
#include "Calculation.h"


using namespace std;

int main()
{

    Move a;
    Move b;

    string User1;
    int num1;
    string User2;
    int num2;
    int counter=1;
    bool LinCom=false;
    vector <int> Played;
    int WhoMove=1;

    User1 = a.User_Input(WhoMove);
    num1 = a.Num_Played(User1);
    Played.push_back(num1);

    WhoMove++;

    User2 = b.User_Input(WhoMove);
    num2 = b.Num_Played(User2);
    Played.push_back(num2);

    WhoMove++;

    Calculation calc;

    int Lim=calc.Limit(Played);

    cout << "All numbers greater than " << Lim << " have been eliminated." << endl;
    cout << endl;

    vector <int> Legal = calc.Legal(Played, Lim);
    cout << "Remaining numbers:  ";
    for (vector<int>::iterator it = Legal.begin(); it != Legal.end(); ++it) {
        if (it==Legal.end()-1){
            cout << ' ' << *it << "." << endl;
        }else{
        cout << ' ' << *it << ", ";
        }
    }


    /*cout << "THIS IS A TEST" << endl;

    vector <int> F;
    F.push_back(15);
    F.push_back(11);
    F.push_back(8);

    vector <int> E = calc.Legal(F, 80);
    cout << "Remaining numbers:  ";
    for (vector<int>::iterator it3 = E.begin(); it3 != E.end(); ++it3) {
        if (it3==E.end()-1){
            cout << ' ' << *it3 << "." << " Size of "<< E.size() << endl;
        }else{
        cout << ' ' << *it3 << ", ";
        }
    }*/
        cout << "Played Numbers:\t";
        for (vector<int>::iterator it3 = Played.begin(); it3 != Played.end(); ++it3) {
        if (it3==Played.end()-1){
            cout << ' ' << *it3 << "." << endl;
        }else{
        cout << ' ' << *it3 << ", ";
        }
    }

    cout << endl;



while (calc.Game_Over(Legal, WhoMove)==false){

    User1 = a.User_Input(WhoMove);
    num1 = a.Num_Played(User1);
    Played.push_back(num1);

    Calculation calc;

    double Lim=calc.Limit(Played);

    cout << "All numbers greater than " << Lim << " have been eliminated." << endl;
    cout << endl;

    vector <int> Legal = calc.Legal(Played, Lim);
    cout << "Remaining numbers:  ";

    for (vector<int>::iterator it = Legal.begin(); it != Legal.end(); ++it) {
        if (it==Legal.end()-1){
            cout << ' ' << *it << "." << endl;
        }else{
        cout << ' ' << *it << ", ";
        }
    }

        cout << "Played Numbers:\t";

        for (vector<int>::iterator it3 = Played.begin(); it3 != Played.end(); ++it3) {
        if (it3==Played.end()-1){
            cout << ' ' << *it3 << "." << endl;
        }else{
        cout << ' ' << *it3 << ", ";
        }
    }


    WhoMove++;
    calc.Game_Over(Legal, WhoMove);
    cout << endl;

}

}

