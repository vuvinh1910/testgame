#include <bits/stdc++.h>

using namespace std;

// void rutgon(char a[20],int i,int y){
//     for(int g=i;g<y;g++){
//         a[g]=a[g+3];
//     }
// }

int main(){
    int v;
    cin >>v;
    while(v--){
    char a[22];
    cin >> a;
    int u=0; int o=strlen(a)-1;
    for(int i=0;i<strlen(a)-1;i++){
        if(a[i]-a[i+1]==1 || a[i]-a[i+1]==-1){
            u++;
        }
    }
    if(u==o){
        cout << "YES\n";
    } else cout << "NO\n";
    }
}
