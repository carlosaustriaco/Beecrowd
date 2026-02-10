#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t,r;
    vector<int> a;
    vector<int> b;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> m;
        a.clear();
        b.clear();

        for(int j=0;j<m;j++){
            cin >> t;
            a.push_back(t);
        }

        b=a;
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());

        r=0;

        for(int j=0;j<m;j++){
            if(a[j]==b[j])
                r++;
        }

        cout << r << endl;
    }

    return 0;
}