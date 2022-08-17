#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
#include<set>
using namespace std;



int main() {
    int Q;
    cin >> Q ;
    multiset<int> S;
    while (Q--){
    int x;
    cin >>x ;


    if(x == 1){
        int a;
        cin >> a;
        S.insert(x);

    } 
    if(x == 2){
        int a,b;
        cin >> a >>b;

        while (b--){
           auto i = S.find(a);

           if (i == S.end())break;
               S.erase(i);
           }
        }
    
    if(x == 3){
        cout<<*S.rbegin();
        // cout<< *S.rbegin()-*S.begin() << endl;

        }

    }


}




//
// Created by hosi1 
//