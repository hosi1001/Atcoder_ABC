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
int main() {
    string str;
    cin >> str;
    int n;
    n =str.length();
    if(n%2 ==0){
        n = n/2 -1;
        cout << str[n];
        return 0;
    }else{
        cout << str[n/2];
        return 0;
    }

}
