//“be” “our” “rum” “will” “dead” “hook” “ship” “blood” “sable” “avenge” “parrot” “captain”

#include <bits/stdc++.h>

using namespace std;

unordered_map<string, string> un;
unordered_map<char, char> unc;

bool checkPalavra(size_t n){
    vector<string> v;

    for(auto i : un){
        if (i.first.length() == n){
            v.push_back(i.first);
        }
    }

    if (v.size() == 0){
        return false;
    }

    for (auto s : v){
        for(int i = 0; i < s.length(); i++){
            if (unc.find(s[i]) != unc.end()){
                if 
            }
        }
    }
}

int main(){
    string s;
    string token;

    getline(cin, s);

    stringstream ss(s);
    bool has6 = false;

    while(getline(ss, token, ' ')){
        un.insert({token, ""});

        has6 = has6 || (token.length() == 6);
    }

    if(!has6){
        cout << "Impossible" << endl;
    }


    return 0;
}