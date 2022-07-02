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

int main(){
    int N;
    cin >> N;

    vector<vector<int>> data(2*N, vector<int>(2*N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> data.at(i).at(j);
        }
    }
    for (int i = N; i < 2*N; i++) {
        for (int j = 0; j < N; j++) {
            data.at(i).at(j) = data.at(i-N).at(j);
    }
}   for (int i = N; i < 2*N; i++) {
        for (int j = N; j < 2*N; j++) {
            data.at(i).at(j) = data.at(i-N).at(j-N);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = N; j <2*N;j++) {
            data.at(i).at(j) = data.at(i).at(j-N);
        }
    }
    long int ans,





    return 0;
}

//
// Created by hosi1 on 2022/07/02.
//

