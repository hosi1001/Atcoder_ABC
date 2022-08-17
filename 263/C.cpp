<<<<<<< HEAD
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
    int n , m ;
    cin >> n >>m;
    vector<int>tab(m);
    for(int i = 0 ; i < m ; i++){
        tab.at(i) = i+1;
    }
    do {
        for(auto x : tab) cout << x << " "; cout << "\n";    // v の要素を表示
    } while( next_permutation(tab.begin(), tab.end()) );     // 次の順列を生成
    return 0;

}
//
// Created by hosi1 on 2022/08/06.
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
int main(){
    int n , m ;
    cin >> n >>m;
    vector<int>tab(m);
    for(int i = 0 ; i < m ; i++){
        tab.at(i) = i+1;
    }
    do {
        for(auto x : tab) cout << x << " "; cout << "\n";    // v の要素を表示
    } while( next_permutation(tab.begin(), tab.end()) );     // 次の順列を生成
    return 0;

}
//
// Created by hosi1 on 2022/08/06.
//
>>>>>>> origin/master
