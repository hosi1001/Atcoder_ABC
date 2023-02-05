#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
//#include <bits/stdc++.h>
#include<string>
using namespace std;
using ll = long long;

//ll num[20];

int main() {
    int n , k;
    cin >> n >> k;
     vector<string> lis(n);
    for(int i = 0 ; i < k ; i++){
        cin >> lis.at(i);
    }
    vector<string>ans(0);


    for(int i = 0 ; i < k; i++){
        int key = 0;
        string kw =lis.at(0);
        for(int j = 0 ; j < lis.size() ; j++){
            if(kw < lis.at(j)){
                kw = lis.at(j);
                key = j;
            }
        }
        ans.push_back(kw);
        lis.erase(lis.begin()+key);
    }

    for(int i = k-1 ; i >= 0 ; i--){
        cout << ans.at(i) << endl;
    }


    return 0;
}





//
// Created by hosi1 on 2022/10/15.
//