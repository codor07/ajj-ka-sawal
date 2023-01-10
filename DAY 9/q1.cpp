//Given a non-negative integer N. The task is to check if N is a power of 2. 
//More formally,check if N can be expressed as 2x for some x.



#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    ll n;
    cout<<"Enter then number : "<<endl;
    cin>>n;
    long long i=1,flag=0;
        while(i<=n){
            if(i==n){
                flag=1;break;
            }
            i*=2;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        

}