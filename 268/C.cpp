#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int n ;
    cin >> n;
    vector<int>dish;
    int tmp = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> tmp;
        dish.push_back(tmp);
    }
    int mark;
    int maxp = 0;
    vector <int> maxpl;

    for(int i = 0 ; i < n ; i ++ ){
        mark = i;
        int sri = 0;
        sri = 0;
        int ll = 0;


            for (int k = n - 1; k < mark; k--) {
                if (ll - 1 < 0) {
                    if (dish.at(k) == ll || dish.at(k) == n - 1 || dish.at(k) == ll + 1) {
                        maxp += 1;
                    }
                } else if (ll + 1 > n - 1) {
                    if (dish.at(k) == sri || dish.at(k) == ll - 1 || dish.at(k) == 0) {
                        maxp += 1;
                    }
                } else {
                    if (dish.at(k) == ll || dish.at(k) == ll - 1 || dish.at(k) == ll + 1) {
                        maxp += 1;
                    }
                }
                ll += 1;
            }

            ll = 0;
            for (int k = mark; k < 0; k--) {
                if (ll - 1 < 0) {
                    if (dish.at(k) == ll || dish.at(k) == n-1 || dish.at(k) == ll + 1) {
                        maxp += 1;
                    }
                } else if (ll + 1 > n - 1) {
                    if (dish.at(k) == sri || dish.at(k) == ll - 1 || dish.at(k) == 0) {
                        maxp += 1;
                    }
                } else {
                    if (dish.at(k) == ll || dish.at(k) == ll - 1 || dish.at(k) == ll+ 1) {
                        maxp += 1;
                    }
                }
                ll += 1;
            }


        maxpl.push_back(maxp);
    }
    int max = *max_element(maxpl.begin(), maxpl.end());

    cout << max << endl;
    return 0;
}


//
// Created by hosi1 
//
