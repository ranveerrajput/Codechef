#include<bits/stdc++.h>
using namespace std;


int main(){
    int ntc;
    cin>>ntc;
    while(ntc--){
        int n,nsum=0,psum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                psum+=arr[j];
            }
            else{
                nsum+=abs(arr[j]);
            }
            if(arr[j]%(j+1)==0 && arr[j]>0){
                count++;
            }
        }
        if(psum>=nsum || count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}