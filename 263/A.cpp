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
    vector<int> num(5);
    for(int i = 0 ; i < 5 ; i ++){
        cin >> num.at(i);
    }
    sort(num.begin() ,num.end());
    if(num.at(0) == num.at(1) && num.at(2) == num.at(3) && num.at(3) == num.at(4) && num.at(1) != num.at(2)){
        cout << "Yes";
        return 0;
    }
    if(num.at(0) == num.at(1) && num.at(1) == num.at(2) && num.at(3) == num.at(4) && num.at(2) != num.at(3)){
        cout << "Yes";
        return 0;
    }

    cout << "No";
    return 0;

}
//
// Created by hosi1 on 2022/08/06.
//
