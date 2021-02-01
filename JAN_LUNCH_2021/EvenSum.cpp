#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            v.push_back(ele);
        }
        ll even=0,odd=0;
        
        if(v[0]%2==0){
            even=1;
            odd=0;
        }
        else{
            even=0;
            odd=1;
        }
        
        for(ll i=1;i<n;i++){
            if((i%2)==0){
                if(odd==1 && v[i]%2!=0){
                    even=1;
                    odd=0;
                    
                }
                else if(even==1 && v[i]%2==0){
                    even=1;
                    odd=0;
                }
                else{
                    odd=1;
                    even=0;
                }
                // if((v[i-1]%2==0 && v[i]%2==0)||(v[i-1]%2!=0 &&  v[i]%2!=0)){
                //     even=1;
                //     odd=0;
                // }
                // else{
                //     if(even==1)
                //     even=0;
                //     odd=1;
                    
                // }
                
            }
            else{
                if(odd==1 && v[i]%2==0){
                    odd=1;
                    even=0;
                }
                else if(even ==1 && v[i]%2!=0){
                    odd=1;
                    even=0;
                }
                else{
                    odd=0;
                    even=1;
                }
                
                
                
                // if((v[i-1]%2!=0 && v[i]%2==0)||(v[i-1]%2==0 && v[i]%2!=0)){
                //     odd=1;
                //     even=0;
                // }
                // else{
                //     odd=0;
                //     even=1;
                // }
            }
            
        }
        if(even==1) cout<<1<<endl;
        else cout<<2<<endl;
    }
    
  
    return 0;
}