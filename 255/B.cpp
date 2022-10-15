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
    int N, K ;
    cin >> N >> K ;
    vector<int> pep(K);
    // printf("-----------input");
    for (int i = 0 ; i < K ; i++){
        cin >> pep.at(i);
        // cout << pep.at(i);
        // printf("\n");
    }



    vector<vector<int>> data(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> data.at(i).at(j);
    //   cout << data.at(i).at(j);
    //   printf("\n");
    }


  }
    // vector<vector<int>> light(2, vector<int>(K));
    long long int min = 1000000;
    long long int dif = 0.005;
    vector<long long int> dist(K) ;
    vector<long long int> ansdist(K) ;
    for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
        // long int dif2 = (pow(((data.at(0).at(pep.at(i)-1) - data.at(0).at(j))), 2) + pow(((data.at(1).at(pep.at(i) -1 ) - data.at(1).at(j))) , 2) ) ;
        long long int dif2 = pow(data.at(pep.at(i)-1).at(0) - data.at(j).at(0), 2) + pow(data.at(pep.at(i)-1).at(1) - data.at(j).at(1), 2);
        
        //  cout << data.at(pep.at(i)-1).at(1) - data.at(j).at(1);
        //  cout << data.at(pep.at(i)-1).at(0) - data.at(j).at(0);
        // cout <<  pow(data.at(pep.at(i)-1).at(0) - data.at(j).at(0), 2) + pow(data.at(pep.at(i)-1).at(1) - data.at(j).at(1), 2);
        // printf("\n");
        //  cout << data.at(pep.at(i)-1).at(0);
        //  cout << data.at(j).at(0);
        //  cout << dif2;
        //          printf("\n");
        //  cout << data.at(0).at(pep.at(i)-1) << data.at(0).at(j);
        //  cout << dif2;
        // cout << dif2;
        // printf ("\n");
    cout << fixed;
    cout <<  setprecision(17) << sqrt(dif2) << endl;

        if (dif2 > dif){

            dif = dif2; 
            ansdist.at(i) = dif;
    // cout << fixed;
    // cout <<  setprecision(17) << sqrt(dist.at(i))<< endl;
            // cout << dif;
            }
        
        }

        // cout << ansdist.at(i) ;
        printf("\n");

    }
    long long int ans = *min_element(ansdist.begin() , ansdist.end());




    cout << fixed;
    cout <<  setprecision(17) << sqrt(ans) << endl;
}