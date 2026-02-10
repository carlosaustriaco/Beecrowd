#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    vector<int> d;
    int n, c, r;

    cin >> n;

    while(n!=0){
        v.clear();
        d.clear();

        for(int i = 1;i<=n;i++){
            v.push_back(i);
        }

        while(v.size()>1){
            d.push_back(v[0]);
            v.erase(v.begin());
            r = v[0];
            v.push_back(r);
            v.erase(v.begin());
        }

        cout << "Discarded cards: ";

        for(int i=0;i<d.size();i++){
            cout << d[i];
            
            if(i!=(d.size()-1)){
                cout << ", ";
            }
        }

        cout << endl << "Remaining card: " << v[0] << endl;

        cin >> n;
    }

    return 0;
}