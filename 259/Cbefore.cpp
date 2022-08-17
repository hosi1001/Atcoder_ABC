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
        return 0;
    }
        int c = 0;
        for(int i = 0 ; i < n ; i++){
            char tmp ;
            tmp = s[i];
            if(tmp == t[i]){
                continue;
            }
            if(s[i-1]==s[i]&& s[i-1] == s[i-2] ){
                string dif;
                dif = s[i-1];
                s.insert(i, dif);
                continue;
            }
            if(t[i]==s[i-1]&& s[i-1] == s[i-2] ) {
                string dif;
                dif = s[i - 1];
                s.insert(i, dif);
                continue;
            }
            if(s[i]==s[i-1]&& s[i] != t[i] ){
                string dif;
                dif = s[i-1];
                s.insert(i, dif);
                cout << "No" <<endl;
                return 0;
            }
            cout << "No" << endl;
            return 0;
        }

        cout << "Yes" << endl;
        return 0;
}
//
// Created by hosi1 on 2022/07/09.
//
