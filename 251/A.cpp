#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    string C1;
    cin >> C1 ;
    int n =  6/C1.size();
    string ans ;
    for (int i = 0 ; i <n ; i++)
    {
        ans = ans + C1;
    }

    cout << ans << endl;
    return 0;

}


//
// Created by hosi1 on 2022/05/21.
//
//
// Created by hosi1 on 2022/05/28.
//