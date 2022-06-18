#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    long N , A , B;
    cin >> N >> A >> B;
    long sum = 0;

    for (long i = 1; i <= N; i++) {
        sum = sum +i;

        if (i % A == 0 || i % B == 0 ){

            sum = sum - i ;

        }
    }
cout << sum;

    
}


//
// Created by hosi1 
//
