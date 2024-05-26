#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
//    bool a = false;
//    bool b = false;
//    bool c = false;
//
//    int d;
//    int e;
//    cin>>d>>e;
//
//    if(d==1){
//        a = true;
//    }else if(d == 2){
//        b = true;
//    }else if ()
//
//    if(a&&b){
//        cout <<3<< endl;
//    }
//    else if(b&&c){
//        cout <<1<< endl;
//    }
//    else if(a&&c){
//        cout <<2<< endl;
//    }else{
//        cout <<-1<<endl;
//    }
    int a = 0;
    int b = 0;
    cin >> a >> b;
    if(a == b){
        cout << -1 <<endl;
        return 0;
    }else{
        cout << 6-a-b << endl;
    }

    return 0;
}
