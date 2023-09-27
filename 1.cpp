#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& vc){
    for (int i = 0; i < vc.size(); i++)
    {
        for (int j = i+1; j < vc.size(); j++){
            if(vc[i]==vc[j]) return false;
        }
        
    }
    return true;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        int a; cin >>a;
        int i=2; int dem=0;
        vector<int> vc;
        while (a>1)
        {
            if(a%i==0){
                dem++;
                vc.push_back(i);
                a=a/i;
            } else {
                i++;
            }
        }

        if(dem==3){
            if(check(vc)){cout <<"1\n";}
            else{cout << "0\n";}
        } else cout << "0\n";
    }
    
    return 0;
}
