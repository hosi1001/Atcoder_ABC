#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;


int main(){
    vector<int>que;
    int q;
    cin >> q;
    int obj;
    int num;
    for(int i = 0 ; i < q; i++){
        cin >> obj >> num;
        if(obj == 1){
            que.push_back(num);
        }else{
            int size = que.size();
            cout<<que.at(size-num)<<endl;
        }
    }
    return 0;
}



//
// Created by hosi on 2023/09/16.
//