#include <bits/stdc++.h>

using namespace std;

int main(){
    uint64_t a, b;

    while(cin >> a >> b){
        uint32_t r = (uint32_t)a ^ (uint32_t)b;
        cout << (uint64_t)r << endl;
    }

    return 0;
}