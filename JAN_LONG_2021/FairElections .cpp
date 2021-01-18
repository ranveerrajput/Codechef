//https://www.codechef.com/JAN21B/problems/FAIRELCT
//ranveerrajput


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n,m,count=0;
        cin>>n>>m;
        vector<ll> a;
        vector<ll> b;
        ll countA=0,countB=0;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            a.push_back(ele);
            countA+=ele;
        }
        
        for(ll i=0;i<m;i++){
            ll ele;
            cin>>ele;
            b.push_back(ele);
            countB+=ele;
        }
        
        if(countA>countB) cout<<0<<endl;
        else{
            
            ll f=0;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end(),greater<int>());
            for(ll i=0;i<min(n,m);i++){
                countA-=a[i];
                countA+=b[i];
                countB-=b[i];
                countB+=a[i];
                if(countA<=countB){
                    count++;
                }
                else{
                    count++;
                    f=1;
                    break;
                    
                }
                
            }
            if(f==1) cout<<count<<endl;
            else cout<<-1<<endl;
                
       }
    }
    
    
  
    return 0;
}