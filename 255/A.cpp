#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;



int main() {
    int R;
    int C;
    cin >> R >> C ;
    vector<vector<int>> data(2, vector<int>(2));
    




    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 2; j++) {
            cin >> data.at(i).at(j); 
             }
    }




  cout << data.at(R-1).at(C-1) ;

  }


