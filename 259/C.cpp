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
    string s , t;
    cin >> s >> t;
    int n , m = 0;
    n = s.length();
    m = t.length();

    if (m < n){
        cout << "No" << endl;
    }
    else{
        int c = 0;
        for(int i = 0 ; i < n ; i++){
            char tmp , tmpb;
            tmp = s[i];
            if(tmp != t[i]){


                if( i-c-2 < 0 || s[i-c-1] != s[i-c-2] ||  ) {
                    cout << "No" << endl;
                    break;
                }
                if()
                c += 1;

            }
            if(i == n-1) {
                cout << "Yes" << endl;
            }
        }

    }


    return 0;

}
//
// Created by hosi1 on 2022/07/09.
//
