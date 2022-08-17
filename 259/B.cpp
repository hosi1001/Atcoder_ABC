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
#define PI 3.1415926535897932

int main(){
    double a , b ,d;
    cin >> a >> b >> d;
    double rad;
    rad = d*PI/180;
    double ansa , ansb;
    ansa = a*cos(rad) - b*sin(rad);
    ansb = a*sin(rad) + b*cos(rad);
    cout << fixed;
    cout << setprecision(20);
    cout << ansa << " ";
    cout << ansb << endl;

}

