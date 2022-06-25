#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;


int main() {
    int N;
    int X;
    cin >> N >> X;

    int D;

    D = X/N;

    if (X % N != 0){
        D = D+1;
    }

    array<char, 5> char_arr{};
    sprintf(char_arr.data() , "%c" , 64 + D);
     printf("%s" , char_arr.data());
     cout << endl;






    // array<char, 5> char_arr{};
    // sprintf(char_arr.data() , "%c" , N);
    // printf("%s" , char_arr.data());
    // ASCII out
  }
