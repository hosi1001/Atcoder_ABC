#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;
    if(str1.length() > str2.length() ){
        cout << "No" << endl;
        return 0;
    }

    bool flag = true;

    for(int i = 0 ; i < str1.length()  ; i++){

        if(str1[i] != str2[i]){
            flag = false;
        }
    }

    if(flag){
        cout << "Yes" <<endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
    
}


//
// Created by hosi1 
//
