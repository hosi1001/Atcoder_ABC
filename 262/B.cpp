#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
bool mas[100+1][100+1];

//int main(){
//    int n , m;
//    cin >> n >> m;
//
//
//        for(int i = 0 ; i  < m ; i++){
//            int u , v;
//            cin >> u >> v;
//            mas[u][v] = true;
//            mas[v][u] = true;
//        }
//        int count = 0;
//        for(int i = 1 ; i <= n-2 ; i++){
//            for(int j = i+1 ; j <= n-1 ; j++){
//                for (int k = j+1; k <= n ; k++) {
//                    if(mas[i][j] && mas[j][k] && mas[k][i]){
//                        count += 1;
//                    }
//                }
//            }
//        }
//        cout << count << '\n';
//        return 0;
//}
bool ver[101][101];

int main(){
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        int U, V;
        cin >> U >> V;
        ver[U][V] = true;
        ver[V][U] = true;
    }
    int answer = 0;
    for (int i = 1; i <= N - 2; i++){
        for (int j = i + 1; j <= N - 1; j++){
            for (int k = j + 1; k <= N; k++){
                if (ver[i][j] && ver[j][k] && ver[k][i]){
                    answer++;
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}
//
// Created by hosi1 on 2022/07/31.
//
