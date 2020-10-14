#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    int ntc;
    cin>>ntc;
    while(ntc--){
    int n;
    vector<long long> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }
    vector<ll> ans;
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=v[i];j++){
            while(v[i]%j==0){
                ans[j]++;
                v[i]/=j;
            }
        }
        if(v[i]>1){
            ans[v[i]]++;
            v[i]=1;
        }


    }
    for(auto ele: ans) cout<<ele<<" ";
    


    

    }
    return 0;
}
