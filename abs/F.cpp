#include <iostream>
#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int a; //500
    int b; //100
    int c; //50
    int x;
    cin >> a >>b >>c >>x;
    int sum =0;
    int cc = 0;
    for(int i = 0 ; i <= a ; i++){
        sum = 0;
        for(int j = 0; j<=b ; j++){
            for(int k = 0 ; k<=c ; k++){
                sum = 500*i+100*j+50*k;
                if(sum==x){
                    cc+=1;
                }
            }
        }
    }

    cout << cc << endl;

    return 0;
}
