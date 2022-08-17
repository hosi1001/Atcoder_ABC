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
    int K;
    cin >> K;
    int H , M ;
    H = K/60;
    M = K%60;
    printf("%2d:%02d", 21+H , 00+M );
    return 0;
}

//
// Created by hosi1 on 2022/07/02.
//
