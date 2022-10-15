#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;

//int main(){
//    int n;
//    cin >> n  >> endl;
//    sprintf(n , "%c" , n);
//    cout << endl;
//}
int main() {
    int N;
    cin >> N ;

    array<char, 5> char_arr{};
    sprintf(char_arr.data() , "%c" , N);
    printf("%s" , char_arr.data());
    cout << endl;
}


//
// Created by hosi1 on 2022/05/21.
//

