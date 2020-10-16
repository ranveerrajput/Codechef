#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        ll s=1;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                s=s+i;
                if(i!=n/i) s=s+(n/i);
        }
    }
        
        cout<<s<<endl;
    }
    
    return 0;
    
}