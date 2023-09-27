#include <bits/stdc++.h>

using namespace std;

int main() {
    int v;
    cin >> v;
    while (v--) {
        long long a;
        cin >> a;
        int u=2; int o=0;
        while(a!=1){
            if(a%u==0 ){
                a=a/u;
                o++;
            } else {
                if(o!=0 || a==1) {cout << u <<" "<< o<< " ";}
                o=0;
                u++;
                }
            if (a==1){if(o!=0) {cout << u <<" "<< o<< "\n";}}
        }
    }

    return 0;
}
