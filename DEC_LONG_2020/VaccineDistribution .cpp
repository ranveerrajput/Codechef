//https://www.codechef.com/DEC20B/problems/VACCINE2
//ranveer

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll ntc;
    cin>>ntc;
    while(ntc--){
        ll n,d,day=0;
        cin>>n>>d;
        vector<ll> risk;
        vector<ll> norisk;
        for(ll i=0;i<n;i++){
            ll ele;
            cin>>ele;
            if(ele<=9 || ele>=80)  risk.push_back(ele);
            else norisk.push_back(ele);
        }
        ll risk_pep=risk.size();
        ll norisk_pep=norisk.size();
        day+=(risk_pep/d)+(norisk_pep/d);
        if(risk_pep%d!=0) day++;
        if(norisk_pep%d!=0) day++;
        cout<<day<<endl;
        
    }
   
    return 0;
}