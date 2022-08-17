#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;
using ll = long long;

void ran(string s , vector<pair<char , int >> &vec){
    int c = 1;
    for(int i = i ; i < (int)s.size(); i++){

        if(s[i]!= s[i-1]){
            vec.push_back({s[i-1] , c});
        c =0;
        }
        c++;
    }
    vec.push_back({s.back() , c});
}


int main(){
    string s, t;
    cin >> s >> t;
    vector<pair<char,int>> sv ,tv;
    ran(s,sv);
    ran(t,tv);

    if(sv.size() !=tv.size() ){
        cout << "No" << endl;
        return 0;
    }

return 0;
}
//
// Created by hosi1 on 2022/07/09.
//
