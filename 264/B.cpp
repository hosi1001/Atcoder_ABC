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
bool mas[15][15];
int main(){
    for(int i = 1 ; i <= 13 ; i++){
        mas[1][i] = true;
        mas[i][1] = true;
        mas[13][i] = true;
        mas[i][13] = true;
    }
    for(int i = 3; i <= 11 ; i++){
        mas[3][i] = true;
        mas[i][3] = true;
        mas[11][i] = true;
        mas[i][11] = true;
    }
    for(int i = 5; i <= 9 ; i++){
        mas[5][i] = true;
        mas[i][5] = true;
        mas[9][i] = true;
        mas[i][9] = true;
    }
    mas[7][7]= true;

    int r , c;
    cin >> r >> c;
    if(mas[r-1][c-1]){
        cout <<"white"<<endl;
        return 0;
    }else{
        cout << "black"<<endl;
    }
    return 0;






//    if(r%2 == 1){
//        if(r<=c && c <= 15-r+1){
//            cout<<"black";
//            return 0;
//        }
//        if(c%2==0){
//            cout<<"white";
//            return 0;
//        }
//        else{
//            cout<<"black";
//            return 0;
//        }
//    }else{
//        if(r<=c && c <= 15-r+1){
//            cout<<"white";
//            return 0;
//        }
//        if(c%2==1){
//            cout<<"black";
//            return 0;
//        }
//        else{
//            cout<<"white";
//            return 0;
//        }
//    }
//    return 0;
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
bool mas[15][15];
int main(){
    for(int i = 1 ; i <= 13 ; i++){
        mas[1][i] = true;
        mas[i][1] = true;
        mas[13][i] = true;
        mas[i][13] = true;
    }
    for(int i = 3; i <= 11 ; i++){
        mas[3][i] = true;
        mas[i][3] = true;
        mas[11][i] = true;
        mas[i][11] = true;
    }
    for(int i = 5; i <= 9 ; i++){
        mas[5][i] = true;
        mas[i][5] = true;
        mas[9][i] = true;
        mas[i][9] = true;
    }
    mas[7][7]= true;

    int r , c;
    cin >> r >> c;
    if(mas[r-1][c-1]){
        cout <<"white"<<endl;
        return 0;
    }else{
        cout << "black"<<endl;
    }
    return 0;






//    if(r%2 == 1){
//        if(r<=c && c <= 15-r+1){
//            cout<<"black";
//            return 0;
//        }
//        if(c%2==0){
//            cout<<"white";
//            return 0;
//        }
//        else{
//            cout<<"black";
//            return 0;
//        }
//    }else{
//        if(r<=c && c <= 15-r+1){
//            cout<<"white";
//            return 0;
//        }
//        if(c%2==1){
//            cout<<"black";
//            return 0;
//        }
//        else{
//            cout<<"white";
//            return 0;
//        }
//    }
//    return 0;
}
//
// Created by hosi1 on 2022/08/13.
//
>>>>>>> origin/master
