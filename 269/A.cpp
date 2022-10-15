#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int a , b;
    cin >> a >> b;
    int ans = 0;
    int a1, a2 ,a3 ,b1 ,b2 ,b3;
    a1, a2 ,a3 ,b1 ,b2 ,b3= 0;
    if(a == 0){
        cout << b;
        return 0;
    }
    if(b == 0){
        cout << a;
        return 0;
    }
    if(a == 7 || b == 7){
        cout << 7;
        return 0;
    }
    if(a % 2 == 1){
        a1 = 1;
        a2 = a-1;
    }else{
        a1 = 0;
        a2 = a-0;
    }
    if(b % 2 == 1){
        b1 = 1;
        b2 = b-1;
    }else{
        b1 = 0;
        b2 = b-0;
    }
    if(a == 6){
        a1 = 2;
        a2 = 4;
    }
    if(b == 6){
        b1 = 2;
        b2 = 4;
    }
    ans += a1;
    ans += a2;
    if(b1 != a1 && b1 != a2){
        ans+= b1;
    }

    if(b2 != a2 && b2!= a1 && b2 != b1){
        ans += b2;
    }

    cout << ans << endl;
    return 0;

}


//
// Created by hosi1 
//
