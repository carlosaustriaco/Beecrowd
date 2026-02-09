#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,i,m,j;

    while(true){
        cin >> n;

        if(n==0)
            break;

        m=0;
        j=0;

        for(i=0;i<n;i++){
            cin >> x;

            if(x==0)
                m++;
            else
                j++;
        }

        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }

    return 0;
}