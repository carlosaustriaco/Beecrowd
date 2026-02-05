#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> un;
    int n, x;

    cin >> n;

    for (auto i = 0; i<n;i++){
        cin >> x;
        auto s = un.find(x);

        if (s == un.end()){
            un[x] = 1;
        }
        else{
            un[x] = un[x] + 1;
        }
    }

    for (auto it : un){
        cout << it.first << " aparece " << it.second << " vez(es)" << endl;
    }

    return 0;
}