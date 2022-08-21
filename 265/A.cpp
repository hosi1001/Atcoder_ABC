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
    int x , y ,n;
    cin >> x>>y  >> n ;
    vector<int> price ;
    int tprice;
    int count = n/3;
    int apple;
    for (int i = 0 ; i < n+1 ; i++){
        apple =i*1;
        tprice = x*i;
        for(int j = 0; j< 100 ; j++ ){
            if(apple == n ){
                tprice += j*y;
                price.push_back(tprice);
            }
            apple+= 3;
        }
    }
    cout << *min_element(price.begin() , price.end());
}
//
// Created by hosi1 on 2022/08/21.
//
