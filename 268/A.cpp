#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int a , b ,c ,d ,e;
    int list[5];
    for(int i = 0 ; i <5 ; i++){
        cin >> list[i];
    }

    vector<int> last;
    for(int i = 0 ; i < 5 ; i++){
        bool flag = true;
        if(i == 0){
            last.push_back(list[i]);
        }
        for(int j = 0 ; j < last.size() ; j++){

            if(list[i] == last.at(j)){
                flag = false;
            }

        }
        if(flag){
            last.push_back(list[i]);}

    }
    int count = last.size();

    cout << count << endl;
    return 0;
}


//
// Created by hosi1 
//
