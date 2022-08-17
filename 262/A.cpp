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
    int y;
    cin >> y;
    int m4;
    m4 = y % 4;
    if (m4==2){
        cout << y;
        return 0;
    }
    if (m4==3){
        cout << y+3;
        return 0;
    }
    if (m4==0){
        cout << y+2;
        return 0;
    }
    if (m4==1){
        cout << y+1;
        return 0;
    }
    }
//
// Created by hosi1 on 2022/07/31.
//
