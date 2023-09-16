#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int i = 0;
int main() {
    int size;
    cin >> size;

    string reel1;
    string reel2;
    string reel3;
    cin >> reel1;
    cin >> reel2;
    cin >> reel3;
    int maxsize = 3*size;

    bool flag2 = false;
    int time2=0;
    int time3=0;
    bool flag3 = false;
    char key;
    int ans[size] = {0};
    for(i = 0 ; i < size ; i++) {
        key = reel1[i];
//        printf("key=%c\n", key);
        for (int j = 2; j < maxsize; j++) {
            for (int k = 0; k < j; k++) {
                if (reel2[(i + k) % size] == key) {
                    flag2 = true;
                    time2 = i + j;
                }
                if (reel3[(i + k) % size] == key) {
                    flag3 = true;
                    time3 = i + j;
                }
                if (flag2 && flag3 && (time2 != time3)) {
                    int fi = std::max(std::max(i, time3), std::max(time2, time3));
//                    printf("fi = %d\n",fi);
                    ans[i] = fi;
                    break;
                }
                if (k == j - 1) {
                    ans[i] = -1;
                }
            }
        }
    }

    int anst = -5;
    for(i = 0 ; i < size ; i++){
        if(ans[i] > anst){
            anst =ans[i];
        }
    }
    cout << anst << endl;
    return 0;
}
//
// Created by hosi on 2023/09/16.
//