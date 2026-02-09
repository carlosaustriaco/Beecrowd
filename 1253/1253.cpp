#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    string s;

    cin >> n;

    for(int i = 0; i<n;i++){
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin, s);
        cin >> q;

        for(size_t j=0; j<s.length();j++){
            s[j]=(char)(s[j]-q);

            if(s[j]<65){
                s[j]=(char)(s[j]+26);
            }
        }

        cout << s << endl;
    }

    return 0;
}