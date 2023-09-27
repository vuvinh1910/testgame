#include <bits/stdc++.h>
using namespace std;

bool snt(int a){
    if (a<2) return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a%i==0) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        long long a,b;cin >> a >> b;
        if(a>b){
            long long temp = a;
            a=b;
            b=temp;
        }
        int so=0;
        for (int i = a ; i <= sqrt(pow(10,14)); i++)
        {
            if( snt(i) ){
                if( pow(i,2) <= b ){
                    so++;
                } else break;
            }
        }
        
        //cout << endl;
        cout << so;
        cout << endl;
    }
    
    return 0;
}
