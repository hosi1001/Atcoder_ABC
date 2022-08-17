#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;


int main() {
     int N ;
     int K ;
    int F ;
    F = 0;
    cin >> N  >> K ;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    vector<int> vec2(K);
    for (int i = 0 ; i < K; i++) {
        cin >> vec2.at(i);
    }
//    vector<int> vec3(100);
    F = vec.at(0);
    for (int i = 0 ; i < N ;i++){
        if (F < vec.at(i)){
        F = vec.at(i);// 最大値検出
        }
    }
    int o = 0; //フラグ
    for (int j = 0 ; j < N ;j++){
        if (F  ==  vec1.at(j)){
        for (int i = 0 ; i < K ; i++){
           if (j+1 == vec2.at(i)){
                o = 1;
                }
            }
        }
    }
    if (o == 0){
        printf("No");
    }
    if (o == 1){
        printf("Yes");
    }
    cout << endl;
}




//
// Created by hosi1 on 2022/05/21.
//
