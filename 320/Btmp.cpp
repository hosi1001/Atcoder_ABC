#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <bits/stdc++.h>
#include<string>
using namespace std;



bool pali(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int findMaxPalindromeLength(const string& S) {
    int maxLength = 1; // 1文字は常に回文なので、最小値は1

    for (int i = 0; i < S.length(); i++) {
        for (int j = i + 1; j <= S.length(); j++) {
            string sub = S.substr(i, j - i);
            if (pali(sub) && sub.length() > maxLength) {
                maxLength = sub.length();
            }
        }
    }

    return maxLength;
}

int main() {
    string S;
    cin >> S;

    int result = findMaxPalindromeLength(S);
    cout << result << endl;

    return 0;
}
//
// Created by hosi on 2023/09/16.
//
