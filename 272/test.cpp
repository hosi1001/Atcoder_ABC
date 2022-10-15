//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x;
    ll k;
    cin >> x >> k;
    string tmp;
    tmp = to_string(x);
    const ll size = tmp.size();
    vector<ll> num (size+1);
    ll num2;
    num2 = x;
    for(int i = 0 ; i < size ; i++){
        num[i] = num2 % 10;
        num2 /= 10;
    }
    for(int i = 0 ; i < k ; i++){
        if(num[i] > 4){
            num[i] = 0;
            num[i+1] += 1;
        }else{
            num[i] = 0;
        }
    }
    ll ans =0;
    for(int i  = 0 ; i < size+1 ; i++){
        ans += num[i]*(ll)pow(10 ,i);
    }
    cout << ans;
    return 0;
}





//
// Created by hosi1 on 2022/10/15.
//
