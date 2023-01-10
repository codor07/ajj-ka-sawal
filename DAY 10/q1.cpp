// Given a sorted array arr[] of distinct integers. 
// Sort the array into a wave-like array(In Place).
// In other words, arrange the elements into a sequence 
// such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5]....






#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    ll n,i;
    cout<<"Enter then number of elements : "<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i+=2){
            swap(a[i],a[i+1]);
        }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    
        

}