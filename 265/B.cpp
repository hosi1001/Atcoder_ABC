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
int main(){
    ll n , m, t ;
    vector<ll>stime;
    cin >> n>> m >>t;
    int tmp;
    for(int i = 0 ; i < n-1 ; i++){
        cin >> tmp;
        stime.push_back(tmp);
    }
    vector<ll>x(m);
    vector<ll>y(m);
    for(int i = 0 ; i < m ; i++){
        cin >> x.at(i);
        cin >> y.at(i);
    }
    x.push_back(0);
    y.push_back(0);
    int xc=0;
    for(int i = 0 ; i <n-1 ; i++){
        t -= stime.at(i);
        if(t <= 0){
            cout << "No"<<endl;
            return 0;
        }
        if(x.at(xc) == i+2){
            t +=y.at(xc);
            xc +=1;
        }
    }
    cout << "Yes"<<endl;
    return 0;
}
//
// Created by hosi1 on 2022/08/21.
//
