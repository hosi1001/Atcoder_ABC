#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int a;
    int b;
    cin >> a >> b;
    int tmp = 1;
    int ans =0;
    for(int i = 0 ; i < b ; i++){
        tmp *=a;
    }
    ans += tmp;
    tmp = 1;
    for(int i = 0 ; i < a ; i++){
        tmp *=b;
    }
    ans += tmp;
    cout << ans;
    return 0;
}

//
// Created by hosi on 2023/09/16.
//