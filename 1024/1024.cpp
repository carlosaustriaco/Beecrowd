#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i;
    string s;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    for(i=0;i<n;i++){
        getline(cin, s);

        for(size_t j=0;j<s.length();j++){
            if(isalpha(s[j]))
                s[j] = (char)(s[j] + 3);
            else
                s[j] = s[j];
        }

        reverse(s.begin(), s.end());

        for(size_t j=(s.length()/2);j<s.length();j++){
            s[j] = s[j] -1;
        }

        cout << s << endl;
    }

    return 0;
}