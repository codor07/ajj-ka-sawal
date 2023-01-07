//replacing all zero's with five's in an integer

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,k=-1,flag=0;
    cout<<"Enter the integer : "<<endl;
    cin>>n;
    
    if(n%10==0)
    flag=1;
    for(i=n;i>0;i/=10){
        if(k==-1)
        k=i%10;
        else{
            k*=10;
            if(i%10!=0)
            k+=i%10;
            else
            k+=5;
        }
    }
    //cout<<k<<endl;
    n=-1;
    for(i=k;i>0;i/=10){
        if(n==-1)
        n=i%10;
        else{
            n*=10;
            if(i%10!=0)
            n+=i%10;
            else
            n+=5;
        }
    }
    if(flag){
        n*=10;
        n+=5;
    }
 cout<<n<<endl;;
}