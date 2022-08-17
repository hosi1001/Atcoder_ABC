<<<<<<< HEAD
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
    int h1, w1, h2 ,w2;
    cin >> h1 >>w1;
    vector<vector<int>> A(h1 , vector<int>(w1));
    for(int i = 0 ; i < h1 ; i++){
        for(int j = 0 ; j <w1 ; j++){
            cin >> A.at(i).at(j);
        }
    }
    cin >> h2 >>w2;
    vector<vector<int>> B(h2 , vector<int>(w2));
    for(int i = 0 ; i < h2 ; i++){
        for(int j = 0 ; j <w2 ; j++){
            cin >> B.at(i).at(j);
        }
    }



    int del(vector<int>, int);{
        vector<int> C;

        for(int i = 0 ; i < w1 ; i++){
            for (int j = 0 ; j < h1 ; j++) {
                for(int k = 0 ; k < h1 ; k++  ){

                }

            }

        }
    }







    return 0;
    }
//
// Created by hosi1 on 2022/08/13.
//
=======
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
    int h1, w1, h2 ,w2;
    cin >> h1 >>w1;
    vector<vector<int>> A(h1 , vector<int>(w1));
    for(int i = 0 ; i < h1 ; i++){
        for(int j = 0 ; j <w1 ; j++){
            cin >> A.at(i).at(j);
        }
    }
    cin >> h2 >>w2;
    vector<vector<int>> B(h2 , vector<int>(w2));
    for(int i = 0 ; i < h2 ; i++){
        for(int j = 0 ; j <w2 ; j++){
            cin >> B.at(i).at(j);
        }
    }



    int del(vector<int>, int);{
        vector<int> C;

        for(int i = 0 ; i < w1 ; i++){
            for (int j = 0 ; j < h1 ; j++) {
                for(int k = 0 ; k < h1 ; k++  ){

                }

            }

        }
    }







    return 0;
    }
//
// Created by hosi1 on 2022/08/13.
//
>>>>>>> origin/master
