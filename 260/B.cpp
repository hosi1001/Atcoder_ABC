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

bool desc_asc(pair<int, int>& left, pair<int, int>& right) {
    if (left.first == right.first) {
        return left.second < right.second;
    } else {
        return right.first < left.first;
    }
}

int main(){
    int n , x ,y ,z;
    cin >> n >> x >> y >>z ;
        vector<pair<int, int>> va(n);
        for(int i = 0 ; i < n ; i++){
            cin >> va[i].first ;
            va[i].second = i+ 1;
        }
    vector<pair<int, int>> vb(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vb[i].first ;
        vb[i].second = i+ 1;
    }
    vector<pair<int, int>> vc(n);
    for(int i = 0 ; i < n ; i++){
        vc[i].first = va[i].first + vb[i].first;
        vc[i].second = i+ 1;
    }
    sort(va.begin(), va.end(), desc_asc);
    sort(vb.begin(), vb.end(), desc_asc);
    sort(vc.begin(), vc.end(), desc_asc);

    vector<int> pass(x+y+z);
    for(int i = 0 ; i < x + y + z; i++){
        pass.at(i) = 0;
    }

    for(int i = 0; i <x ; i++){
        pass.at(i) = va[i].second;
    }
    int cc;
    cc = 0;

for(int i = 0 ; i < n ; i ++){
    int flag = 0;
    for(int j = 0 ; j < x+y+z ; j++) {
        if (vb[i].second == pass.at(j)){
            flag = 1;
        }
    }
    if (flag == 0) {
        pass.at(x + cc) = vb[i].second;
        cc += 1;
    }
    if(pass.at(x+y-1)!= 0){
        break;
    }
}
cc = 0;

    for(int i = 0 ; i < n ; i ++){
        int flag = 0;
        for(int j = 0 ; j < x+y+z ; j++) {
            if (vc[i].second == pass.at(j)){
                flag = 1;
            }
        }
        if (flag == 0) {
            pass.at(x + y + cc) = vc[i].second;
            cc += 1;
        }
        if(pass.at(x+y+z-1)!= 0){
            break;
        }
    }

    sort(pass.begin()  , pass.end());
    for(int i = 0 ; i < x+y+z ; i++){
        cout << pass.at(i) << endl;
    }
    return 0;


}
//
// Created by hosi1 on 2022/07/17.
//
