#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll  ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        ll count=0;
        ll i=0;
        while(n>0){
            if( (n & 1)==0 ){
                count+=pow(2,i);
            }
            i++;
            n=n>>1;
        }

        cout<<count<<endl;
    }
    
    return 0;
}
