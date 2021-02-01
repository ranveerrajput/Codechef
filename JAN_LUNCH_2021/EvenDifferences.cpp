#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        ll even=0,odd=0;
        vector<ll> a;
    
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            if(ele%2==0) even++;
            else odd++;
        }
        if(odd==n || even==n) cout<<0<<endl;
        else if(odd>even) cout<<even<<endl;
        else cout<<odd<<endl;
    }
    
  
    return 0;
}