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
    string str1 ;
    cin >> str1;
    cout << str1;
    string str2 = "atcoder";
    int an , tn , cn , on ,dn, en,rn =0;
    int tmp;
    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 'a'){
            tmp = i;
        }
    }
    an = tmp;

    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 't'){
            tmp = i;
        }
    }

    for(int i = 0 ; i < tmp-1 ; i++){
        if(str1[i] !='a'){
            tn +=1;
        }
    }


    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 'c'){
            tmp = i;
        }
    }

    for(int i = 0 ; i < tmp ; i++){
        if(str1[i] !='a' ||str1[i] !='t' ){
            cn +=1;
        }
    }



    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 'o'){
            tmp = i;
        }
    }

    for(int i = 0 ; i < tmp ; i++){
        if(str1[i] !='a' ||str1[i] !='t'||str1[i] !='c' ){
            on +=1;
        }
    }



    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 'd'){
            tmp = i;
        }
    }

    for(int i = 0 ; i < tmp ; i++){
        if(str1[i] !='a' ||str1[i] !='t' ||str1[i] !='c' ||str1[i] !='o'  ){
            dn +=1;
        }
    }
    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 'e'){
            tmp = i;
        }
    }

    for(int i = 0 ; i < tmp ; i++){
        if(str1[i] !='a' ||str1[i] !='t' ||str1[i] !='c' ||str1[i] !='o' ||str1[i] !='d'){
            en +=1;
        }
    }



    for(int i = 0 ; i < 7; i++  ){
        if(str1[i] == 'r'){
            tmp = i;
        }
    }

    for(int i = 0 ; i < tmp ; i++){
        if(str1[i] !='a' ||str1[i] !='t' ||str1[i] !='c' ||str1[i] !='o' ||str1[i] !='d' ||str1[i] !='e' ){
            rn +=1;
        }
    }

    cout << an+tn+cn+on+dn+en+rn;
    return 0;


}
//
// Created by hosi1 on 2022/08/13.
//
