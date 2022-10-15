#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <charconv>
#include <bits/stdc++.h>
#include<string>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> cross(4);
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i);
    }
    int P = 0;

    cross.at(0) = 0;
        cross.at(1) = 0;
            cross.at(2) = 0;
                cross.at(3) = 0;

    for(int i = 0 ; i < N ; i++){

        if (A.at(i) == 1){
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));
            P = P + cross.at(3);
            cross.at(3) = 0; //rest
            cross.at(0) = 1;
 
 
            cross.at(3) = cross.at(2);
            cross.at(2) = 0;
           cross.at(2) = cross.at(1);
           cross.at(1) = 0;
           cross.at(1) = cross.at(0);
           cross.at(0) = 0;



            // printf("A.at(i) = 1, P = %d\n" , P);
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));
            
        }

        if (A.at(i) == 2){
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3)); 
            P = P + cross.at(3) + cross.at(2);
            cross.at(3) = 0;
            cross.at(2) = 0;
            cross.at(0) = 1;


 
            cross.at(3) = cross.at(1);
            cross.at(1) = 0;
           cross.at(2) = cross.at(0);
           cross.at(0) = 0;





            // printf("A.at(i) = 2 P = %d\n" , P);
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));


            
        }
        if (A.at(i) == 3){
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));
            P = P + cross.at(3) + cross.at(2) +cross.at(1);
            cross.at(3) = 0;
            cross.at(2) = 0;
            cross.at(1) = 0;
            cross.at(0) = 1;
            cross.at(3) = cross.at(0);
            cross.at(0) = 0;
            // cross.at(4) = 0;
            // cross.at(3) = 0;
            // printf("A.at(i) = 3 P=%d\n" , P);
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));

            
        }
        if (A.at(i) == 4){
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));

            cross.at(0) = 1;
            P = P + cross.at(3) + cross.at(2) +cross.at(1) + cross.at(0);
            cross.at(3) = 0;
            cross.at(2) = 0;
            cross.at(1) = 0;
            cross.at(0) = 0;
            // printf(" %d %d %d %d \n" , cross.at(0) , cross.at(1) , cross.at(2) , cross.at(3));
            
            // printf("A.at(i) = 4 P=%d\n" , P);
        }

    }

    cout << P ;



  }
