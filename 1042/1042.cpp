#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> s;
    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    s.push_back(n1);
    s.push_back(n2);
    s.push_back(n3);

    sort(s.begin(), s.end());

    for(int x : s){
        cout << x << endl;
    }

    cout << endl;

    cout << n1 << endl << n2 << endl << n3 << endl;

    return 0;
}