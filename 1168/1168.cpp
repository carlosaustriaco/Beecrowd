#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int n;
    int t;
    unordered_map<char, int> un = {
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6},
        {'0', 6}
    };

    cin >> n;

    for (auto i = 0; i < n; i++){
        cin >> str;

        t = 0;

        for (auto j = 0; j < str.length(); j++){
            t += un[str[j]];
        }

        cout << t << " leds" << endl;
    }

    return 0;
}