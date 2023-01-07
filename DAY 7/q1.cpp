//binary search

#include<bits/stdc++.h>
using namespace std;
int main(){
    int K,n,i;
    cout<<"Enter the elements to be found : "<<endl;
    cin>>K;
    cout<<"Enter the number of elements in array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];

    int str=0,en=n-1,flag=-1,mid;
       while(str<=en){
           mid=str+((en-str)/2);
           
           if(a[mid]==K){
               flag=1;
               break;
           }
           
           if(a[mid]<K)
           str=mid+1;
           else
           en=mid-1;
       }
       cout<<flag;
       
}