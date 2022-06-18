#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> data(3, vector<int>(4));
 
  // 入力 (2重ループを用いる)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data.at(i).at(j);
    }
  }

     cout << data.at(0) << data.at(0);

     return 0;
}

