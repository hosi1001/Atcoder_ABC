#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int N,W;
    cin >> N >> W;
    vector<int> vec1(N);
    for (int i=0 ;i < N ; i++){
        cin >> vec1.at(i);
    }
    int ans = 0;
    for (int j = 0 ; j < N ; j++){
        if (vec1.at(j) <= W){
            ans = ans +1;
        }
    }

    for (int j=0 ; j <N ; j++){
        int W1 = W - vec1.at(j);


        for (int i =1 ; i < N ; ++i){
            cout << vec1.at(i) << endl;
        
        if (vec1.at(i) <= W1){



            ans += 1;
            }
        }
    }

cout << ans <<   endl;

return 0;
    
}


//
// Created by hosi1 
//
