//https://www.codechef.com/DEC20B/problems/HXOR
//ranveer

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int setBitNumber(int n) 
{ 
	n |= n >> 1; 
	n |= n >> 2; 
	n |= n >> 4; 
	n |= n >> 8; 
	n |= n >> 16; 
	n = n + 1; 
	return (n >> 1); 
} 


int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n,x;
        cin>>n>>x;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            v.push_back(ele);
        }
        
        while(n==2 && x>0){
            if(v[0]!=0){
                ll a=setBitNumber(v[0]);
                v[0]=v[0]^a;
                v[1]=v[1]^a;
                x--;
            }
            else{
                if(x%2!=0){
                    v[0]=v[0]^1;
                    v[1]=v[1]^1;
                }
                break;
                
            }
                
            }
        
        if(x>1000000) x=1000000;
        ll l=0,r=1;
        
        while(x>0 && n>2){
            if(v[l]!=0){
                ll a=setBitNumber(v[l]);
                v[l]=v[l]^a;
                ll f=0;
                for(ll j=l+1;j<n;j++){
                    if((v[j]^a)<v[j]){
                        v[j]=v[j]^a;
                        f=1;
                       // cout<<j<<endl;
                        break;
                    }
                }
                if(f==0){
                    v[n-1]=v[n-1]^a;
                }
                
                x--;
            }
            else{
                if(v[n-2]==0) break;
                l++;
               
                
            }
            
        }
        
        for(auto ele: v) cout<<ele<<" ";
        cout<<endl;  
        
    }
        
    return 0;
}
