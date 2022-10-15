#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
//#include <bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long;

//ll num[20];

int main() {
    ll x , k;
    cin >> x >> k;
    string tmp = to_string(x);
    ll size = tmp.size();
    vector<ll> num (size+1 , 0);//5
    ll num2;
    num2 = x;
    for(int i = 0 ; i < size ; i++){
        num[i] = num2 % 10;
        num2 /= 10;
    }
    for(int i = 0 ; i < k ; i++){// 0 1 2 3
        if(i > size) break;
        if(num[i] > 4){
            num[i] = 0;
        if(i != size) num[i+1] += 1;
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