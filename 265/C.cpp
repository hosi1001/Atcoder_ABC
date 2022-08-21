#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
#include <iomanip>
#include <cmath>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;
using ll = long long;
int main(){
    int h,w;
    cin >> h >> w;
    vector<vector <char>>map(h , vector<char>(w));
    for(int i = 0 ; i < h; i++){
        for(int j = 0; j < w ; j++){
            cin >> map.at(i).at(j);
        }
    }
    vector<int> dx={-1 , 1 , 0 , 0},dy={ 0 , 0 , -1 ,1};// 0U 1D 2L 3R
    int x , y = 0;
    x =0;
    int count = 0;

    for(int i = 0 ; i < 300000 ; i++){

        if(count >= 250000){
            cout << -1 << endl;
            return 0;
        }

        if(map.at(x).at(y)== 'U' && x!=0){
            x+=dx[0];
            y+=dy[0];
            count+=1;
        }
        if(map.at(x).at(y)== 'U' && x==0){
            cout << x+1 << " " << y+1 << endl;
            return 0;
        }
        if(map.at(x).at(y)== 'D' && x!=h-1){
            x+=dx[1];
            y+=dy[1];
            count+=1;
        }
        if(map.at(x).at(y)== 'D' && x==h-1){
            cout << x+1 << " " << y+1 << endl;
            return 0;
        }
        if(map.at(x).at(y)== 'L' && y!= 0){
            x+=dx[2];
            y+=dy[2];
            count+=1;
        }

        if(map.at(x).at(y)== 'L' && y== 0){
            cout << x+1 << " " << y+1 << endl;
            return 0;
        }
        if(map.at(x).at(y)== 'R' && y!= w-1){
            x+=dx[3];
            y+=dy[3];
            count+=1;
        }

        if(map.at(x).at(y)== 'R' && y== w-1){
            cout << x+1 << " " << y+1 << endl;
            return 0;
        }


    }

    return 0;
}
//
// Created by hosi1 on 2022/08/21.
//
