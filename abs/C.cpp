#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {

    string s;
    cin >> s;
//    s="101";
    int cc;
    for(int i = 0 ; i < 3 ; i++){
        if(s[i]=='1'){
            cc+=1;
        }
    }

    cout<<cc<<endl;


    return 0;
}
