#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

int main(){
     ll ntc;
     cin>>ntc;
     while(ntc--){
         ll n,k;
         cin>>n>>k;
         vector<ll> v;
         vector<ll> fact;

          for(ll i=0;i<n;i++){
             ll ele;
              cin>>ele;
              v.pb(ele);
          }
            int flag=1;
         for(ll  i=0;i<n;i++){
             for(ll j=2;j*j<v[i] ;j++){
                 if(j<=k){
                 while(v[i]%j==0){
                     fact.pb(j);
                     v[i]/=j;

                 }
                 }
                 else{
                     flag=0;
                     break;
                 }

             }
             if(v[i]>1 && v[i]<=k){
              fact.pb(v[i]);
                v[i]=1;
             }
             else flag=0;

         }
         
         if(flag==1) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     return 0;


}
