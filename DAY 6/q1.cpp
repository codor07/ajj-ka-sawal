//checking whether array is sorted or not 

#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    int n,i,flag=1;
    cout<<"Enter the number of elements in array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
        
        if(i>=1){
            if(a[i]<a[i-1])
            flag=0;
        }
    }
        cout<<flag;
}