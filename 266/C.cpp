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
int main() {
    vector<double>x (4);
    vector<double>y (4);
    for(int i =0 ; i <4 ; i++){
        cin >> x.at(i);
        cin >> y.at(i);
    }


    int difx[4];
    int dify[4];
    for(int i = 0 ; i < 3 ; i ++){
        difx[i] = x[i+1] - x[i];
        dify[i] = y[i+1] - y[i];
    }
    difx[3]  = x[0] - x[3]; //0 b-a 1 c-b  2 d-c
    dify[3]  = y[0] - y[3];// 3 a-d

    bool flag = true;

    if((difx[0]*dify[1] - dify[0]*difx[1]) <= 0){
        flag = false;
    }
    if((difx[1]*dify[2] - dify[1]*difx[2]) <= 0){
        flag = false;
    }
    if((difx[2]*dify[3] - dify[2]*difx[3]) <= 0){
        flag = false;
    }
    if((difx[3]*dify[0] - dify[3]*difx[0]) <=0){
        flag = false;
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;

}
