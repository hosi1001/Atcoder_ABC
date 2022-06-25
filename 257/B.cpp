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
    int N , K , Q;
    cin >> N >> K >> Q;

    vector<int>A(K);
    vector<int>L(Q);
    for (int i = 0 ; i < K ; i++){
        cin >> A.at(i);
    }
    for (int i = 0 ; i < Q ; i++){
        cin >> L.at(i);
    }

    for (int i = 0 ; i < Q ; i++){

        int tmp;  // tmp >=0
        tmp = L.at(i)-1;

        if (A.at(tmp) == N ){
            // printf("flag1\n");
            continue;
        }

        if (tmp + 1 < K ){


        if (A.at(tmp+1) == A.at(tmp) + 1){
            // printf("flag2\n");
            continue;
        
        } 
        }

        // printf("flag3\n");

        A.at(tmp) = A.at(tmp) +1 ;  
        

    // for (int i = 0 ; i < K ; i++){
    // printf("%d " , A.at(i));
    // }
    // printf("\n");



    }

    for (int i = 0 ; i < K ; i++){
    printf("%d " , A.at(i));
    }
    return 0;




}
