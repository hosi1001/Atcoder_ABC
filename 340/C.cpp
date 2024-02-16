#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>

using namespace std;


map<long long, long long>m; //このマップに記憶させる

long long calc(long long n){
    if(n==1) return 0; //1だったら0円
    if(m.count(n))return m[n]; //nだったらnの連想配列のお金
    return m[n] = calc(n/2)+calc((n+1)/2)+n;
}

int main(){
    long long n;
    cin >> n;
    long long ans; //longlongじゃないとオーバーフローする
    ans = calc(n);
    cout << ans<<endl;
}


