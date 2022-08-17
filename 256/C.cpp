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


    // vector<vector<int>> masshyou(9, vector<int>(30));
    // for (int i = 0 ; i < 9 ; i++){
    //     for(int j = 0 ; j <30 ;j++){
    //         mass.at(i).at(j) = j+1;
    //     }
    // }
    vector<vector<int>> mass(3, vector<int>(3));

    for (int i = 1 ; i <= 30 ; i++){
        mass.at(0).at(0) = i;
    for (int j = 1 ; j <= 30 ; j++){
        mass.at(0).at(1) = j;
    for (int k = 1 ; k <= 30 ; k++){
        mass.at(1).at(0) = k;
    for (int l = 1 ; l <= 30 ; l++){
        mass.at(1).at(1) = l;

    mass.at(0).at(2) = h1- i - j;
    mass.at(1).at(2) = h2- k - l;
    mass.at(2).at(0) = w1 - i - k;
    mass.at(2).at(1) = w2 -j - l;
    mass.at(2).at(2) = w3 - mass.at(0).at(2) - mass.at(1).at(2);

    if (mass.at(0).at(2) >0 &&  mass.at(1).at(2) > 0 && mass.at(2).at(0) > 0 && mass.at(2).at(1) > 0 && 
        mass.at(2).at(2) > 0 && mass.at(0).at(2) + mass.at(1).at(2) + mass.at(2).at(2) == w3 && 
        mass.at(2).at(0) + mass.at(2).at(1) + mass.at(2).at(2) == h3 ) {
        ans =ans +  1;
        for(int a = 0 ; a<3 ;a++){
            // printf("\n");
            for(int b =0 ; b <3 ; b++){
                // printf("%d" , mass.at(i).at(j));
            }
        }
    }
    }   
    }
    }
    }

    cout << ans;



    // cout << mass.at(0).at(0) << mass.at(0).at(1) << mass.at(0).at(2) <<mass.at(1).at(0) ;
    return 0;
}



