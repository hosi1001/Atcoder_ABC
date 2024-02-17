#include <iostream>
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
    vector<int> list;
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        cin >> tmp;
//        cout << tmp<<endl;
        list.push_back(tmp);
    }


    int cc = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        cc = 0;
        while (1) {
            if (list.at(i) % 2 == 0) {
                list.at(i) = list.at(i) / 2;
                cc+=1;
            } else {
                break;
            }

        }
        ans.push_back(cc);
    }

    int ret = 0;

//    for(int i = 0 ; i < n ; i++){
//        if(ret > ans.at(n) ){
//            ret = ans.at(n);
//        }
//    }

//
//    cout<<ret<<endl;
    cout<< *std::min_element(ans.begin(), ans.end())<<endl;
    return 0;
}
