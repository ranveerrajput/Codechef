//https://www.codechef.com/DEC20B/problems/POSPREFS
//ranveer


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n,k,count=0,pos,neg;
        cin>>n>>k;
        pos=k;
        neg=n-k;
        
        for(int i=1;i<=n;i++){
            if(i%2!=0 && pos>0){
                cout<<i<<" ";
                pos--;
            }
            else if(i%2==0 && neg>0){
                cout<<-i<<" ";
                neg--;
            }
            else if(pos==0 && neg>0){
                cout<<-i<<" ";
            }
            else if(pos>0 && neg==0){
                cout<<i <<" ";
            }
            
        }
        cout<<endl;
             
        
    }
     
    return 0;
}
