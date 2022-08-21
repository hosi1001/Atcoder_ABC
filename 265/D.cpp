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
    int n, p, q, r;
    cin >> n >> p >> q >> r;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int x = 0; x <= n - 3; x++) {
        for (int y = x + 1; y <= n - 2; y++) {
            for (int z = y + 1; z <= n - 1; z++) {
                for (int w = z + 1; z <= n ; w++) {
                    ll sump,sumq,sumr;
                    sump =0;
                    sumq =0;
                    sumr =0;
                    for (int c =x ; c <=y-1 ; c++){
                        sump +=a.at(c);
                    }
                    for (int c =y ; c <=z-1 ; c++){
                        sumq +=a.at(c);
                    }
                    for (int c =z ; c <=w-1 ; c++){
                        sumr +=a.at(c);
                    }
                    if(sumq == q && sump == p && sumr == r){
                        cout << "Yes" << endl;
                        return 0;
                    }

                }
            }
        }
    }
    cout << "Nes" << endl;
    return 0;
}
//
// Created by hosi1 on 2022/08/21.
//
