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
    int n;
    cin >> n;
    ll ans = 0;

    vector<vector<ll>> a (n , vector<ll>(n));
    for(int i = 0; i < n ; i ++){
        for(int j = 0 ; j < n ; j++){
            char c;
            cin >> c;
            a[i][j] = c ;
        }
    }
    vector<int> dx={1,1,1,0,0,-1,-1,-1},
                dy={1,0,-1,1,-1,1,0,-1};
    for(int i=0 ; i<n ;i++){
        for (int j=0; j<n ;j++){
            ll tmp =0;
            ll x = i , y =j;
            for (int k =0 ; k <8 ;k ++){
            tmp*= 10;
            tmp+=a[x][y];
            x+=dx[k];
            y+=dy[k];
            x%=n;
            x+=n;
            y%=n;
            y+=n;
            x%=n;
            y%=n;
            }
            ans = max(ans , tmp);
        }
    }
    cout << ans << endl;



    return 0;
}

//
// Created by hosi1 on 2022/07/02.
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

int main(){
    int N;
    cin >> N;

    vector<vector<int>> data(2*N, vector<int>(2*N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> data.at(i).at(j);
        }
    }
    for (int i = N; i < 2*N; i++) {
        for (int j = 0; j < N; j++) {
            data.at(i).at(j) = data.at(i-N).at(j);
    }
}   for (int i = N; i < 2*N; i++) {
        for (int j = N; j < 2*N; j++) {
            data.at(i).at(j) = data.at(i-N).at(j-N);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = N; j <2*N;j++) {
            data.at(i).at(j) = data.at(i).at(j-N);
        }
    }
    long int ans,





    return 0;
}

//
// Created by hosi1 on 2022/07/02.
//

>>>>>>> origin/master
