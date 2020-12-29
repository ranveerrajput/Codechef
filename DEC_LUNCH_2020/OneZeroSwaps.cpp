//https://www.codechef.com/problems/SWAP10HG/
//ranveerrajput



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n;
        cin>>n;
        string s,p;
        cin>>s;
        cin>>p;
        ll so=0,sz=0,po=0,pz=0;
        
        for(ll i=0;i<n;i++){
            if(s[i]=='1') so+=1;
            else sz+=1;
        }
        
        for(ll i=0;i<n;i++){
            if(p[i]=='1') po+=1;
            else pz+=1;
        }
        if(pz!=sz && po!=so) cout<<"No"<<endl;
        else{
        ll flag=0;
        int c1=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=p[i]){
            if(s[i]=='0'){
                if(c1>0) c1-=1;
                else{
                    flag=1;
                    break;
                }
            }
            else c1++;
          }  
        }
            if(flag==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }

    return 0;
}