#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll l,r;
        cin>>l>>r;
        if(r>=2*l) cout<<-1<<endl;
        else cout<<r<<endl;
    }
    
    return 0;
}
