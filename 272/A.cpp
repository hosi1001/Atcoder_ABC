#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int x;
    cin >> x;
    int ans = 1;
    while(x >= 1){
        ans *= x;
        x -=1;

    }
    cout << ans <<endl;
}


//
// Created by hosi1 
//
