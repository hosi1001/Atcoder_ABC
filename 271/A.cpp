#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int n ;
    int tmp;
    int sum;
    sum = 0;
    cin >> n;
    for(int i = 0 ; i <n ; i++){
        cin >> tmp;
        sum += tmp;
    }
    cout << sum << endl;
    return 0;


}


//
// Created by hosi1 
//
