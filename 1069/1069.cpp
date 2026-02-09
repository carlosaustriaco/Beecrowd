#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    int q,r;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    for(int i=0;i<n;i++){
        cin>>s;
        r=0;q=0;

        for(size_t j=0;j<s.length();j++){
            if(s[j]=='<')
                q++;
            else if(s[j]=='>'){
                if(q>0){
                    q--;
                    r++;
                }
            }
        }

        cout << r << endl;
    }
    
    return 0;
}