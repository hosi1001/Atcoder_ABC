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
    int n;
    cin >> n;
    vector<vector<char>> data(n, vector<char>(n));
    for(int i = 0 ; i<n ;i++){
        for (int j = 0 ; j<n ; j++){
            cin >> data.at(i).at(j);
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(data.at(i).at(i) != '-'){
            cout << "incorrect" << endl;
            return 0;
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n ; j++ ){

            if(data.at(i).at(j) == 'W'){
                if(data.at(j).at(i) != 'L'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            if(data.at(i).at(j) == 'L'){
                if(data.at(j).at(i) != 'W'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            if(data.at(i).at(j) == 'D'){
                if(data.at(j).at(i) != 'D'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }

        }
    }
    cout << "correct" << endl;
    return 0;



}
//
// Created by hosi1 on 2022/07/23.
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
    int n;
    cin >> n;
    vector<vector<char>> data(n, vector<char>(n));
    for(int i = 0 ; i<n ;i++){
        for (int j = 0 ; j<n ; j++){
            cin >> data.at(i).at(j);
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(data.at(i).at(i) != '-'){
            cout << "incorrect" << endl;
            return 0;
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n ; j++ ){

            if(data.at(i).at(j) == 'W'){
                if(data.at(j).at(i) != 'L'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            if(data.at(i).at(j) == 'L'){
                if(data.at(j).at(i) != 'W'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            if(data.at(i).at(j) == 'D'){
                if(data.at(j).at(i) != 'D'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }

        }
    }
    cout << "correct" << endl;
    return 0;



}
//
// Created by hosi1 on 2022/07/23.
//
>>>>>>> origin/master
