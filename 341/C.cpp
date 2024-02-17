#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int h; // 横幅
    int w; // 縦幅
    int n;
    string t;
    cin >> h >> w >> n;
    cin >> t;

    vector<vector<char>> data(h, vector<char>(w));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char tmp;
            cin >> tmp;
            data[i][j] = tmp;
        }
    }
    vector<vector<char>> map(h, vector<char>(w));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            map[i][j] = 'N';
        }
    }

    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            bool flag = true;
            int y = i;
            int x = j;
            if(data[y][x]=='#'){
                continue;
            }
            for (int k = 0; k < n; k++) {
                if (t[k] == 'L') {
                    x -= 1;
                    if (x < 0 || data[y][x] == '#') {
//                        cout<<"flag L "<<endl;
                        flag = false;
                        break;
                    }
                } else if (t[k] == 'R') {
                    x += 1;
                    if (x >= w || data[y][x] == '#') {
//                        cout<<"flag R "<<endl;
                        flag = false;
                        break;
                    }
                } else if (t[k] == 'U') {
                    y -= 1;
                    if (y < 0 || data[y][x] == '#') {
//                        cout<<"flag U "<<endl;
                        flag = false;
                        break;
                    }
                } else {
                    y += 1;
                    if (y >= h || data[y][x] == '#') {
//                        cout<<"flag D "<<endl;
                        flag = false;
                        break;
                    }
                }

            }
            if (flag) {
                map[y][x] = 'Y';
            }

        }
    }

    int result = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (map[i][j] == 'Y') {
                result += 1;
            }
        }
    }

    cout << result << endl;

    return 0;
}
