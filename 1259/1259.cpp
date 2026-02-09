#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> i;
    vector<int> p;
    int n,c,x;

    cin >> n;

    for(c=0;c<n;c++){
        cin >> x;

        if((x%2)==0)
            p.push_back(x);
        else
            i.push_back(x);
    }

    sort(p.begin(),p.end());
    sort(i.begin(),i.end());
    reverse(i.begin(),i.end());

    for(c=0;c<p.size();c++){
        cout << p[c] << endl;
    }

    for(c=0;c<i.size();c++){
        cout << i[c] << endl;
    }

    return 0;
}