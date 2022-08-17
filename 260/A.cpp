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
    string s;
    cin >> s;
    int flag = 1;
    for(int i = 0 ; i<3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            if(j == i){
                continue;
            }

            if(s[j] == s[i] ){
                flag += 1 ;
            }

        }
        if (flag == 1){
            cout << s[i] << endl;
            return 0;
        }
        flag = 1;
    }
    cout << -1 << endl;
    return 0;

}
//
// Created by hosi1 on 2022/07/17.
//
