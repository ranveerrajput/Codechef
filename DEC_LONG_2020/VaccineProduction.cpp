//https://www.codechef.com/DEC20B/problems/VACCINE1
//ranveer


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    
    ll d1,v1,d2,v2,p,vacci=0,d=1;
    cin>>d1>>v1>>d2>>v2>>p;
    while(vacci<p){
        if(d>=d1) vacci+=v1;
        if(d>=d2) vacci+=v2;
        d++;
    }
    cout<<d-1<<endl;
    
    
    return 0;
}
