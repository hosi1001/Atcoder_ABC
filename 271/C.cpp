#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<ll>ls{};
    int tmp;
    for(int i = 0 ; i < n ; i++){
        cin >> tmp;
        ls.push_back(tmp);
    }
    bool flag = false;

    if(ls.size() == 2 && ((ls.at(0) % 2 == 1 && ls.at(1) % 2 == 0) || (ls.at(0) % 2 == 1 && ls.at(1) % 2 == 0) ) ){
        cout << -1  << endl;
        return 0;
    }

    ll max[2] = {0 , 0};

    for(int i = 0 ;  i < ls.size() ; i++){
        if(ls.at(i) % 2 == 1)continue;
        if (ls.at(i) > max[0]){
            max[1] = max[0];
            max[0] = ls.at(i);
        }
    }

}


//
// Created by hosi1 
//
