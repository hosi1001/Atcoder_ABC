#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    string sta;
    cin >> sta;
    if(sta[0] == '1'){
        cout << "No" << endl;
        return 0;
    }
    int pin[7] = {1,1,1,1,1,1,1,}; // 0( 7) 1( 4) 2(2 8) 3(1 5) 4(3 9) 5(6) 6(10)


    if(sta[6] == '0' ){
        pin[0] = 0;
    }
    if(sta[3] == '0' ){
        pin[1] = 0;
    }
    if(sta[1] == '0'&& sta[7] == '0'){
        pin[2] = 0;
    }
    if(sta[0] == '0'&& sta[4] == '0'){
        pin[3] = 0;
    }
    if(sta[2] == '0'&& sta[8] == '0'){
        pin[4] = 0;
    }
    if(sta[5] == '0'){
        pin[5] = 0;
    }
    if(sta[9] == '0'){
        pin[6] = 0;
    }

    bool flag = false;
    int p;
    for (int i = 0 ; i <6 ; i ++){
//        cout << pin[i]<<endl;
        if(pin[i] == 1){
            p = i;
            bool flag2 = false;
            for(int j = p+1 ;j<7  ;j++ ){

                if(pin[j] == 0 ){flag2 = true;}
                if(pin[j] == 1  && flag2){
                    flag = true;
                }
            }
        }
    }



    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}


//
// Created by hosi1 
//
