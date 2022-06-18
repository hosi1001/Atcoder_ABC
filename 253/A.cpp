#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int A, B , C;
    cin >> A >> B >> C;

    // if (A >= B ){
    //     int D;

    //     D = B ;
    //     B = A ;
    //     A = D ;
    // }

    // if (B >= C ){
    //     int D;

    //     D = C ;
    //     C = B ;
    //     B = D ;
    // }

    if ((A <= B && B <= C) || (C <= B && B <= A)){
        cout << "Yes" ;
    }else{
        cout << "No" ;
    }

    return 0;
    
}






//
// Created by hosi1 
//
