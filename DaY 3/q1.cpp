//printing pascals triangle
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    vector<int>v1={1},v2;
    cout<<'[';
    for(i=0;i<n;i++){
        if(i!=0){
            cout<<'[';
        for(i=0;i<v1.size();i++){
            cout<<v1[i];
            if(i!=v1.size()-1)
            cout<<',';
            
            }
        
        cout<<']';
        if(i!=n-1)
        cout<<',';
        }
            //cout<<8<<endl;
            v2.push_back(1);
            
            for(j=0;j<v1.size()-1;j++)
                v2[j+1]=v1[j]+v1[j+1];

            //v2.push_back(1);
            v1=v2;
            if(i==n-1){
            cout<<",[";
        for(i=0;i<v1.size();i++){
            cout<<v1[i];
            if(i!=v1.size()-1)
            cout<<',';
            
            }
            cout<<']';
            }
        
            
    }
    
cout<<']';
}