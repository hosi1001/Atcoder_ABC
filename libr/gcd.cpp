#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int gcm(int x,int y){
    if (x==0){
        return y;
    }else{
        return gcm(y %x , x) ;
    }
}

int lcm(int x,int y){
    return x*y/gcm(x,y);
}


int main() {
    int x,y;
    cin >> x >>y;
    cout << "gcd =" <<gcm (x,y);
    printf("\n");
    cout << "lcm ="<<lcm (x,y);
        printf("\n");
    return 0;

    
}

//
// Created by hosi1 
//
