#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int x , y , z;
    cin >> x >> y >>z ;
    if(y*x< 0){
        cout << fabs(x);
        return 0;
    }
    if(fabs(x) < fabs(y)){
        cout << fabs(x);
        return 0;
    }else{
        if(z*y < 0){
            cout << fabs(z)*2 + fabs(x);
            return 0;
        }else{
            if(fabs(y) > fabs(z) ){
                cout << fabs(x);
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}


//
// Created by hosi1 
//
