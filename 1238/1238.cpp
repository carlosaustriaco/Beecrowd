#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s1,s2,r;

    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        r="";
        for(size_t j=0;j<max(s1.length(),s2.length());j++){
            if(j<s1.length())
                r+=s1[j];
            if(j<s2.length())
                r+=s2[j];            
        }

        cout << r << endl;
    }

    return 0;
}