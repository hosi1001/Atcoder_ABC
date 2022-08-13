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
    int n;
    cin  >> n;
    vector<int>pare(n+1);
    for(int i = 2 ; i < n+1 ; i ++){
        cin >> pare.at(i);
    }
    int count = 0;
    int next = n;
    for(int i = 0 ; i <n ; i++){
        next = pare.at(next);
        count ++;
        if (next == 1){
            break;
        }
    }
    cout << count ;
    return 0;
}