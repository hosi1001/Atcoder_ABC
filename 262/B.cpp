#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    int n , m;
    cin >> n >> m;
    int flag = 0;
    vector<int> u (m);
    vector<int> v (m);
    for(int i = 0 ; i <m ; i++){
        cin >> u.at(i);
        cin >> v.at(i);
    }

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++) {
            if (i == j){
                continue;
            }
            if (v.at(j) == u.at(i)) { //u1 == v2
                for(int k = 0 ; k < m ; k++){
                    if(k == j){
                        continue;
                    }
                    if(k == i){
                        continue;
                    }
                    if(((v.at(k) == u.at(j))&&u.at(k)==v.at(i)) || (u.at(k) == u.at(j) &&v.at(k)==v.at(i))){ //u2 = v3
                            flag +=1;
                        }
                    }
                }
            if(u.at(j) == u.at(i)){ // u1 = u2
                for(int k = 0 ; k < m ; k++){
                    if(k == j){
                        continue;
                    }
                    if(k == i){
                        continue;
                    }
                    if((v.at(k) == v.at(j) &&u.at(k)==v.at(i)) || (u.at(k) == v.at(j) && v.at(k)==v.at(i)) ){ // v2 = v3
                            flag +=1;
                    }
                }
            }
        }
    }
    cout << flag;
    return 0;
}
//
// Created by hosi1 on 2022/07/31.
//
