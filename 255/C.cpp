#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;


int main(){
    int X, A ,D ,N ;
    cin >> X >> A >> D >> N;

    // if(X =! 0 || A =! D )

    vector<int>data(N);

    for(int i = 0; i < N ; i++){
        data.at(i) = A + D*i;
    }


    int best;
    int dif = fabs (X - data.at(0) );

    for (int i =0 ; i < N ; i++){
        int dif2 = fabs(X - data.at(i));
        if (dif > dif2){
            dif = dif2;
            best = data.at(i);
        }
    }

    cout << fabs(X - best);
    return 0;


}