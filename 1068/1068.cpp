#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char c;
    size_t i;
    int p;
    bool state;

    while(cin >> s){
        p = 0;
        state = true;
        for(i = 0; i < s.length(); i++){
            if(s[i]=='(')
                p++;
            else if(s[i]==')')
                p--;

            state = state && (p>=0);

            if(!state)
                break;
        }
        
        state = state && (p==0);

        if(state)
            cout << "correct" << endl;
        else
            cout << "incorrect"<<endl;
    }
}