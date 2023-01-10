//Your task is to calculate sum  of primes present as digits of given number N.



#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    ll n;
    cout<<"Enter then number : "<<endl;
    cin>>n;
    int ans=0,i;
        for(i=n;i>0;i/=10){
            int k=i%10;
            if(k==2||k==3||k==5||k==7)
                ans+=k;
        }
        cout<<ans<<endl;;
        

}