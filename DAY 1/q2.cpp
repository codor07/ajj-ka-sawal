
//finding min and second min


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,m1=-1,m2=INT_MAX,k;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>n;
    
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>k;
        if(i==0)
        m1=k;
        else
        m1=min(m1,k);

        if(i>=1){
            if(k>m1&&k<m2)
            m2=k;
        }
    }

    if(n==0)
    {
        cout<<"Minimum and Second Minimum do not exist";
    }
    if(n==1)
    {
        cout<<"Minimumm element - "<<m1<<endl;
        cout<<"Second Minimum do not exist"<<endl;
    }
    if(n>1){
        cout<<"Minimumm element - "<<m1<<endl;
        if(m2!=INT_MAX)
        cout<<"Second Minimum element - "<<m2<<endl;
        else
        cout<<"Second Minimum do not exist"<<endl;

    }
}
