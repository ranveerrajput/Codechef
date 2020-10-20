#include<bits/stdc++.h>
using namespace std;

int main(){
    int ntc;
    cin>>ntc;
    while(ntc--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //vector<int> a(n);
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(i==arr[i-1]){
                continue;
            }
            else{
                for(int j=1;j<i;j++){
                    if(__gcd(j,i)==arr[i-1]){
                        flag=true;
                        break;
                    }
                    else{
                        flag=false;
                        
                    }
                }
                if(flag==true){
                    continue;
                }
                else{
                    break;
                }
                
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    
}
    return 0;
}