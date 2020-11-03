#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        vector<ll> arr;
        ll s=0;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            ans=ans|ele;
            s+=ele;
            ans|=s;
        }
           
        cout<<ans<<endl;
    }
    
    return 0;
}
