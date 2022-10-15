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
#define k 998244353ll;
int main() {
    ll n;
    cin >> n;
    ll x;
    x = n % k;
    if(x > 0){
        cout << x <<endl;
    }else{
        while(x < 0){
            x +=k
        }
        cout << x << endl;
    }
    return 0;

}
