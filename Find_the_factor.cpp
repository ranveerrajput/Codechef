#include<bits/stdc++.h>
using namespace std;
#define ll  long long

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin >> n;
        for(ll i=1;i*i<=n;i++){
            cout<<i*i<<" ";
            
        }
        cout<<endl;
    }
    return 0;
    
    
}