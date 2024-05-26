#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n  >>m ;
    vector<int> a;
    vector<int> b;

    int tmp;

    for(int i = 0 ; i < n ; i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i = 0 ; i < m ; i++){
        cin>>tmp;
        b.push_back(tmp);
    }


    vector<int> c;
    for(int i = 0 ; i < n ; i++){
        c.push_back(a.at(i));
    }
    for(int i = 0 ; i < m ; i++){
        c.push_back(b.at(i));
    }
    sort(c.begin(),c.end());

    vector<bool> data(n + m, false);

    for(int i = 0 ; i < n+m ; i++){
        for(int j = 0 ; j < n ; j++){
           if(c.at(i) == a.at(j)){
               data.at(i) = true;
           }
        }
    }



    for(int i = 0 ; i < n+m-1 ; i++){
        if(data.at(i)&&data.at(i+1)){
            cout <<"Yes"<<endl;
            return 0;
        }
    }
        cout <<"No"<<endl;
    return 0;
}
