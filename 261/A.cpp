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
    int l1 , r1 ,l2 , r2 ;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1-l2 <= 0){
        cout << 0 << endl;
        return 0;
    }

    if (l1 - r2 >= 0){
        cout << 0 << endl;
        return 0;
    }

    int rmax = r2;
    if(r2 > r1 ){
        rmax = r1;
    }
    int lmax = l2;
    if(l1 > l2){
        lmax = l1;
    }

    cout << rmax - lmax<< endl;
}
//
// Created by hosi1 on 2022/07/23.
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
    int l1 , r1 ,l2 , r2 ;
    cin >> l1 >> r1 >> l2 >> r2;
    if (r1-l2 <= 0){
        cout << 0 << endl;
        return 0;
    }

    if (l1 - r2 >= 0){
        cout << 0 << endl;
        return 0;
    }

    int rmax = r2;
    if(r2 > r1 ){
        rmax = r1;
    }
    int lmax = l2;
    if(l1 > l2){
        lmax = l1;
    }

    cout << rmax - lmax<< endl;
}
//
// Created by hosi1 on 2022/07/23.
//
>>>>>>> origin/master
