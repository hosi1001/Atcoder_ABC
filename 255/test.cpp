#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (int i = 0; i < k; ++i) {
    cin >> a.at(i);
  }

  vector<vector<double>> xy(n, vector<double>(2));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 2; ++j) {
      cin >> xy.at(i).at(j);
    }
  }

  double max = 0;
  double ans = 0;
  vector<double> dist(k);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < k; ++j) {
      dist.at(j) = pow(xy.at(a.at(j)-1).at(0) - xy.at(i).at(0), 2) + pow(xy.at(a.at(j)-1).at(1) - xy.at(i).at(1), 2);
    cout << fixed;
    cout <<  setprecision(17) << sqrt(dist.at(j)) << endl;
    }
  printf("\n");
    ans = *min_element(dist.begin(), dist.end());
    if (ans > max) max = ans;
  }

  cout << fixed;
  cout << setprecision(17) << sqrt(max) << endl;
}