<<<<<<< HEAD
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
=======
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    int n , m;
    cin >> n >> m;
    int flag = 0;
    vector<int> u (m);
    vector<int> v (m);
    for(int i = 0 ; i <m ; i++){
        cin >> u.at(i);
        cin >> v.at(i);
    }

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++) {
            if (i == j){
                continue;
            }
            if (v.at(j) == u.at(i)) { //u1 == v2
                for(int k = 0 ; k < m ; k++){
                    if(k == j){
                        continue;
                    }
                    if(k == i){
                        continue;
                    }
                    if(((v.at(k) == u.at(j))&&u.at(k)==v.at(i)) || (u.at(k) == u.at(j) &&v.at(k)==v.at(i))){ //u2 = v3
                            flag +=1;
                        }
                    }
                }
            if(u.at(j) == u.at(i)){ // u1 = u2
                for(int k = 0 ; k < m ; k++){
                    if(k == j){
                        continue;
                    }
                    if(k == i){
                        continue;
                    }
                    if((v.at(k) == v.at(j) &&u.at(k)==v.at(i)) || (u.at(k) == v.at(j) && v.at(k)==v.at(i)) ){ // v2 = v3
                            flag +=1;
                    }
                }
            }
        }
    }
    cout << flag;
    return 0;
}
//
// Created by hosi1 on 2022/07/31.
//
>>>>>>> origin/master
