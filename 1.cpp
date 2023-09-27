#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int a,b; cin >>a>>b;
        int c,d; cin >>c>>d;
        int count=0;
        if(a>b){
            int temp = a;
            a=b;
            b=temp;
        }
        for (int i = a; i <= b; i++)
        {
            if(i%c==0) {count++;}
            else if(i%d==0) {count++;}
        }
        cout << count <<endl;
        
    }
    
    return 0;
}
