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
        v.at(i);
        u.at(i);
        //v.at(i)base
        for(int j = 0 ; j < m ; j++) {
            if (v.at(j) == u.at(i)) { //u1 == v2
                if (i == j){
                    continue;
                }
                for(int k = 0 ; k < m ; k++){
                    if(j == k){
                        continue;
                    }
                    if(k == i){
                        continue;
                    }
                    if(v.at(k) == u.at(j)){ //u2 = v3
                        if(u.at(k)==v.at(i)){ //u3 = v1
                            flag +=1;
                        }
                    }
                    if(u.at(k) == u.at(j)){ //u2 = u3
                        if(v.at(k)==v.at(i)){ // v3 = v1
                            flag +=1;
                        }
                    }
                }
            }
            if(u.at(j) == u.at(i)){ // u1 = u2
                for(int k = 0 ; k < m ; k++){
                    if(j == k){
                        continue;
                    }
                    if(k == i){
                        continue;
                    }
                    if(v.at(k) == v.at(j)){ // v2 = v3
                        if(u.at(k)==v.at(i)){ //u3 == v1
                            flag +=1;
                        }
                    }
                    if(u.at(k) == v.at(j)){ // v2 = u3
                        if(v.at(k)==v.at(i)){ // v3 = v1
                            flag +=1;
                        }
                    }
                }
            }
        }
        //u.at(i)base
//        for(int j = 0 ; j < m ; j++) {
//            if (i == j){
//                continue;
//            }
//            if (v.at(j) == v.at(i)) { //v1 == v2
//                for(int k = 0 ; k < m ; k++){
//                    if(j == k){
//                        continue;
//                    }
//                    if(k == i){
//                        continue;
//                    }
//                    if(v.at(k) == u.at(j)){ //u2 = v3
//                        if(u.at(k)==u.at(i)){ //u3 = u1
//                            flag +=1;
//                        }
//                    }
//                    if(u.at(k) == u.at(j)){ //u2 = u3
//                        if(v.at(k)==u.at(i)){ // v3 = u1
//                            flag +=1;
//                        }
//                    }
//                }
//            }
//            if(u.at(j) == v.at(i)){ // v1 = u2
//                for(int k = 0 ; k < m ; k++){
//                    if(j == k){
//                        continue;
//                    }
//                    if(k == i){
//                        continue;
//                    }
//                    if(v.at(k) == v.at(j)){ // v2 = v3
//                        if(u.at(k)==u.at(i)){ //u3 == u1
//                            flag +=1;
//                        }
//                    }
//                    if(u.at(k) == v.at(j)){ // v2 = u3
//                        if(v.at(k)==u.at(i)){ // v3 = u1
//                            flag +=1;
//                        }
//                    }
//                }
//            }
//        }
//

    }
    cout << flag/3;

    return 0;

}

//#include <iostream>
//#include <vector>
//#include <array>
//#include <iterator>
//#include <charconv>
//#include <bits/stdc++.h>
//#include<string>
//#include <iomanip>
//#include <cmath>
//#include <map>
//#include <stack>
//#include <queue>
//#include <algorithm>
//#include <numeric>
//#include <set>
//using namespace std;
//using ll = long long;
//
//int main(){
//    int n , m;
//    cin >> n >> m;
//    int flag = 0;
//    vector<int> u (m);
//    vector<int> v (m);
//    for(int i = 0 ; i <m ; i++){
//        cin >> u.at(i);
//        cin >> v.at(i);
//    }
//    for(int i = 0; i < m ; i++){
//        if(i == 1){
//            continue;
//        }
//        if(u.at(i) == u.at(1)) {
//            for (int j = 0; j < m; j++) {
//                if (j == 1 || j == i) {
//                    continue;
//                }
//                if ((u.at(j) == v.at(i) && v.at(j) == v.at(1)) || (v.at(j) == v.at(i) && u.at(j) == v.at(1))) {
//                    flag += 1;
//                }
//            }
//        }
//        if(v.at(i) == u.at(1)){
//            for(int j = 0; j < m; j++){
//                if (j == 1 || j == i) {
//                    continue;
//                }
//                if((u.at(j) == u.at(i) && v.at(j) == v.at(1)) || (v.at(j) == u.at(i) && u.at(j) == v.at(1))){
//                    flag += 1;
//                }
//            }
//        }
//    }
//    cout << flag;
//    return 0;
//}
//
// Created by hosi1 on 2022/07/31.
//
//
// Created by hosi1 on 2022/07/31.
//
