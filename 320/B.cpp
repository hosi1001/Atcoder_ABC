#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

bool judge(string str){
    int lp = 0;
    int rp = str.length() -1;
    bool flag = true;

    while(lp < rp){
        if(str[lp]!= str[rp]){
            flag = false;
        }
        lp++; //一個ずつ右と左にずらす
        rp--;
    }

    return flag;
}

int main(){
    int ans = 1;
    string S;
    cin >> S;

    string part;

    for(int i = 0 ; i <S.length();i++){
        for(int j = i ; j < S.length(); j++){
            part = S.substr(i,j-i+1);
            int length = part.length();
//            printf("i=%d,j=%d\n",i,j);
//            printf("%d\n",length);
            if(judge(part)&&length > ans){
                ans = length;
            }
        }
    }

    cout << ans << endl;

    return 0;
}



//
// Created by hosi on 2023/09/16.
//