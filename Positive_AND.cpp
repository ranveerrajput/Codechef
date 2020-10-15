#include<bits/stdc++.h>
using namespace std;

int main(){
    int ntc;
    cin>>ntc;
    while(ntc--){
        int n;
        cin>>n;
       // cout<<(a & b) <<" "<<"ans";
       if(n==1) cout<<1<<endl;
       else if(n==2 || ((n & 2)==0 && n%2==0) ) cout<<-1<<endl;
       else{
           vector<int> v;
           stack<int> s;
           v.push_back(1);
           s.push(2);


            //inserting all the odd numbers into the vector

           for(int i =3; i <= n; i++){

               if(!s.empty()){
                   if( (s.top()&i)>0){
                       if((*v.begin() & i)>0){
                           v.insert(v.begin(),i);
                           v.insert(v.begin(),s.top());
                           s.pop();
                       }
                    else{
                        v.push_back(i);
                        v.push_back(s.top());
                        s.pop();

                    }
                   }
               }
                else if((*v.begin() & i)==0){
                   
                    s.push(i);
                    
                } 
                 else if((*v.begin() & i)>0){
                     v.insert(v.begin(),i);
                     }
                
           }
           for(int i=0;i<n;i++){
               cout<<v[i]<<" ";
           }
           cout<<v.size();
           cout<<endl;

           
           }

       }

    return 0;
}
