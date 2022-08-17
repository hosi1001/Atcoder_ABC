#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int H;
    int W;
    cin >> H >> W ;
    vector<vector<char>> data(H , vector<char>(W));

    for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> data.at(i).at(j);
    }


  }


    vector<int>xvec(2);
    vector<int>yvec(2);

    int a =0;
    int b =0;


    for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (data.at(i).at(j) == 'o' ){
      xvec.at(a) = i;
      yvec.at(b) = j;
      a = 1;
      b = 1;
    
    }   

  } 

}
  int xo = fabs(xvec.at(1) - xvec.at(0)) ;
//   if ()
  int yo = fabs(yvec.at(1) - yvec.at(0)) ;

  cout << xo + yo ;



}

//
// Created by hosi1 
//
