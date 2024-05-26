#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int n;
    int t;

    cin >> n >> t;

    vector<vector<bool>> card(n*3, vector<bool>(n*3, false));

    if(n > t){
        cout << -1 << endl;
        return 0;
    }

    long long tmp = 0;
    long long x = 0;
    long long y = 0;
    for(long long i = 0 ; i < t ; i++){
        cin >> tmp;

        x = n + ((tmp-1)%n);
        y = n + ((tmp-1)/n);

//        cout << tmp/n << endl;
//        cout << tmp%n << endl;
        card[x][y] = true;
        card[x-n][y] = true;
        card[x][y-n] = true;
        card[x-n][y-n] = true;
        card[x][y+n] = true;
        card[x+n][y+n] = true;
        card[x+n][y] = true;
        card[x-n][y+n] = true;
        card[x+n][y-n] = true;

//        int t = 0;
        //以下ビンゴチェック
        bool bingo = true;

        // 縦
        for(int j = 0 ; j < n ; j++){
            if(!card[x][y +j]){
                bingo = false;
            }
        }
        if(bingo){
            cout << i + 1<<endl;
            return 0;
        }

        // 横
        bingo = true;
        for(int j = 0 ; j < n ; j++){

            if(!card[x + j][y]){
                bingo = false;
            }

        }

        if(bingo){
            cout << i + 1<<endl;
            return 0;
        }

        //　斜め
        bingo = true;
        for(int j = 0 ; j < n ; j++){
            if(!card[x+j][y +j]){
                bingo = false;
            }
        }
        if(bingo){
            cout << i + 1<<endl;
            return 0;
        }

        // 斜め2
        bingo = true;
        for(int j = 0 ; j < n ; j++){
            if(!card[x-j][y +j]){
                bingo = false;
            }
        }
        if(bingo){
            cout << i + 1<<endl;
            return 0;
        }

    }

    cout << -1 << endl;
    return 0;
}
