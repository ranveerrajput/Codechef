//https://www.codechef.com/LTIME91B/problems/SEDARR
//ranveerrajput

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        ll sum=0;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            v.push_back(ele);
            sum+=ele;
        }
        if(sum%k==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    

    return 0;
}