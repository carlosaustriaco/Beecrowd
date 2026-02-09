#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,y1,y2;
    int r;

    while(true){
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1==0){
            break;
        }

        if((x1==x2)&&(y1==y2)){
            r=0;
        }
        else if((x1==x2)||(y1==y2)){
            r=1;
        }
        else{
            bool s = false;
            int aux1=x1;
            int aux2=y1;
            while((x1>0)&&(y1>0)){
                if((x1==x2)&&(y1==y2)){
                    s = true;
                    break;
                }
                x1--;
                y1--;
            }

            if(!s){
                x1=aux1;
                y1=aux2;

                while((x1<=8)&&(y1<=8)){
                    if((x1==x2)&&(y1==y2)){
                        s=true;
                        break;
                    }
                    x1++;
                    y1++;
                }
            }

            if(!s){
                x1=aux1;
                y1=aux2;

                while((x1<=8)&&(y1>0)){
                    if((x1==x2)&&(y1==y2)){
                        s=true;
                        break;
                    }
                    x1++;
                    y1--;
                }
            }

            if(!s){
                x1=aux1;
                y1=aux2;

                while((x1>0)&&(y1<=8)){
                    if((x1==x2)&&(y1==y2)){
                        s=true;
                        break;
                    }
                    x1--;
                    y1++;
                }
            }          

            if(s){
                r=1;
            }
            else{
                r=2;
            }        
        }

        cout << r << endl;
    }

    return 0;
}