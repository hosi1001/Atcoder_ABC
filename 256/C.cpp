    #include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){ // 解き終わっておりません！！！！！！！！！！！
    int h1, h2 , h3 , w1 , w2 ,w3;
    int ch1 , ch2 , ch3 , cw1 ,cw2 ,cw3 =0;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3 ;
    int ans = 0;


    vector<vector<int>> mass(9, vector<int>(30));
    for (int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j <30 ;j++){
            mass.at(i).at(j) = j+1;
        }
    }

    for (int i = 0 ; i < 30 ; i++){
    for (int j = 0 ; i < 30 ; j++){
    for (int k = 0 ; i < 30 ; k++){

    

    if (mass.at(0).at(i) + mass.at(0).at(j) + mass.at(0).at(k) = h1){
        ch1 = 1;
    }   
    }
    }
    }

    cout << ch2;



    // cout << mass.at(0).at(0) << mass.at(0).at(1) << mass.at(0).at(2) <<mass.at(1).at(0) ;
    return 0;
}



