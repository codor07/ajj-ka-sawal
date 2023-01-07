//finding missing element in array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of elements in array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n-1;i++)
    cin>>a[i];

    int suma=0,req;
    for(i=0;i<n-1;i++){
        suma+=a[i];
    }
    req=(n*(n+1))/2;
    cout<<(req-suma);
}