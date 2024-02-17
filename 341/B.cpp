#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long tmp;
    vector<long long> list;
    for(int i = 0 ; i< n ; i++){
        cin>>tmp;
        list.push_back(tmp);
    }

    vector<long long>s;
    vector<long long>t;
    for(int i = 0 ; i < n-1 ; i++){
        cin>> tmp;
        s.push_back(tmp);
        cin>> tmp;
        t.push_back(tmp);
    }

    for(int i = 0 ; i < n-1 ; i++){
            if(list.at(i) >= s.at(i)){
                long long div = (list.at(i)/s.at(i));
                list.at(i) -= div*s.at(i);

                list.at(i+1) += div*t.at(i);
            }
    }

    cout << list.at(n-1);
    return 0;
}
