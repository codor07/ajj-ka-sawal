// Given an array arr[] of N positive integers. 
// Push all the zeros of the given array to the 
// right end of the array while maitaining the order of non-zero elements.



#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter arra elements : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];

    int c=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            if(i-c>1){
                a[c+1]=a[i];
                a[i]=0;
                
            }
            c++;
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}