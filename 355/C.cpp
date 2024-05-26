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


    if (n > t) {
        cout << -1 << endl;
        return 0;
    }
    long long tmp = 0;
    int row[n] = {};
    int col[n] = {};
    int diag[2] ={};
    for(int i = 0  ; i < t ; i ++){
        cin >> tmp;
        long long x = 0;
        long long y = 0;

        x =  ((tmp - 1) % n);
        y = ((tmp - 1) / n);


        //縦横に何個値が収納されてるかのカウントで可能
        row[x]+=1;
        col[y]+=1;
        if(x==y){
            diag[0]+=1;
        }
        if(x+y==n-1){
            diag[1]+=1;
        }
        if(row[x]==n){
            cout << i+1 << endl;
            return 0;
        }
        if(col[y]==n){
            cout << i+1 << endl;
            return 0;
        }

        //斜めは元から二列鹿定義されてないのでどんなにnが大きくても2この配列で管理可能
        if(diag[0]==n){
            cout << i+1 << endl;
            return 0;
        }
        if(diag[1]==n){
            cout << i+1 << endl;
            return 0;
        }

    }


    cout<<-1<<endl;
    return 0;

}
