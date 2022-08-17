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
    int N , Q;
    cin >> N >> Q;
    vector<char>ch2(N);
    for (int i=0 ; i < N  ;i++){
        cin >> ch2.at(i);
    }
    long long dif = 0 ;
    vector<string>ch(N);

    for (int i=0 ; i < N  ;i++){
        ch.at(i) = ch2.at(i);
    }

    for (int i = 0 ; i < Q ; i++){
        int tmp;
        cin >> tmp;
        int tmp2;
        if (tmp == 1){
            cin >> tmp2;
            dif += tmp2;
//            for (int j = 0; j < tmp2; ++j) {
//                string tmp3;
//                tmp3 = ch.at(N-1);
//                for (int k = 0; k < N-1; ++k) {
//                    ch.at(N-1-k) = ch.at(N-2-k);
//                }
//                ch.at(0) = tmp3;
//            }
        }


        if (tmp == 2){
            int lastdif;
            lastdif = (N+dif) % N;
            cin>> tmp2;
//            if (tmp2-1-lastdif < 0)
//            {
//                cout << ch.at(N-1-(+tmp2-1-lastdif)%N) << "\n";
//                break;
//            }
            cout << ch.at((tmp2-1-lastdif + N)%N) << endl;
        }
    }

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
    int N , Q;
    cin >> N >> Q;
    vector<char>ch2(N);
    for (int i=0 ; i < N  ;i++){
        cin >> ch2.at(i);
    }
    long long dif = 0 ;
    vector<string>ch(N);

    for (int i=0 ; i < N  ;i++){
        ch.at(i) = ch2.at(i);
    }

    for (int i = 0 ; i < Q ; i++){
        int tmp;
        cin >> tmp;
        int tmp2;
        if (tmp == 1){
            cin >> tmp2;
            dif += tmp2;
//            for (int j = 0; j < tmp2; ++j) {
//                string tmp3;
//                tmp3 = ch.at(N-1);
//                for (int k = 0; k < N-1; ++k) {
//                    ch.at(N-1-k) = ch.at(N-2-k);
//                }
//                ch.at(0) = tmp3;
//
//            }

        }

        if (tmp == 2){
            int lastdif;
            lastdif = (N+dif) % N;
            cin>> tmp2;
//            if (tmp2-1-lastdif < 0)
//            {
//                cout << ch.at(N-1-(+tmp2-1-lastdif)%N) << "\n";
//                break;
//            }
            cout << ch.at((tmp2-1-lastdif + N)%N) << endl;
        }
    }




    return 0;
}
//
// Created by hosi1 on 2022/07/02.
//
>>>>>>> origin/master
