#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s1,s2;
    bool c;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        if(s2.length()>s1.length()){
            c=false;
        }
        else{
            c=true;
            for(size_t j=0;j<s2.length();j++){
                if(s1[s1.length()-s2.length()+j]!=s2[j]){
                    c=false;
                    break;
                }
            }
        }

        if(c){
            cout << "encaixa" << endl;
        }
        else{
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}