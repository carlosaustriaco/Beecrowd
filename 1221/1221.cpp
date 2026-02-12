#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,i,j;
    string s;
    
    cin >> n;

    for(i=0;i<n;i++){
        cin>>x;
        s="";
        if(x==1)
            s="Not ";
        if((x>2)&&(x%2==0))
            s="Not ";

        if(x>2){
            for(j=3;j<sqrt(x);j+=2){
                if(x%j==0)
                    s="Not ";
            }
        }

        cout << s << "Prime" << endl;
    }

    return 0;
}