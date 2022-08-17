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
    int n, m , x ,t ,d ;

    cin >> n >> m >> x >> t >> d;
    int ans;
    if (x <= m && m <= n ){
        ans = t;
    }
    else{
        ans = t - (n-m)*d + (n-x) * d;
    }

cout  << ans << endl;

}
//
// Created by hosi1 on 2022/07/09.
//
