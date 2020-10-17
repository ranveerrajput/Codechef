#include<bits/stdc++.h>
using namespace std;
#define ll long long 




int main(){
    ll n=1000000;
    vector<ll> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
    //for(auto it:phi) cout<<it<<" ";
    
    ll ntc;
    cin>>ntc;
    ll j=1;
    while(ntc--){
        ll a,b;
        cin>>a>>b;
        //cout<<phi[a]<<" "<<phi[b]<<"coprime "<<endl;
        if(phi[a]<=phi[b]){
            cout<<"Case "<<j<<": "<<"Swapnil lost it"<<endl;
        }
        else{
            cout<<"Case "<<j<<": "<<"Shibli took it"<<endl;
            
        }
        j++;
    }
    
    return 0;
}
