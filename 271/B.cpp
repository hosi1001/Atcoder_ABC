#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    int tmp;
    bool cr[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cr[i][j] = false;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cr[i][i] = true;
    }

    for(int i = 0 ; i < m ; i++){
        cin >> tmp;
        int tmp2[tmp];
        for(int l = 0; l < tmp ; l++){
            cin >> tmp2[l];
        }
        for(int j = 0 ; j < tmp-1 ; j++){

            for(int k = j+1 ; k < tmp ; k++){
                cr[tmp2[j]-1][tmp2[k]-1] = true;
                cr[tmp2[k]-1][tmp2[j]-1] = true;
            }
        }
    }


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(cr[i][j] == false){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}





//
// Created by hosi1 
//
