// sorting 

#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n;
        cout<<"Enter then number of elements : "<<endl;
        cin>>n;
        cout<<"Enter the array elements : "<<endl;
        int nums[n];
        for(i=0;i<n;i++)
        cin>>nums[i];
         int cz=0,co=0,ct=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            cz++;
            else if(nums[i]==1)
            co++;
            else
            ct++;

        }
        cout<<cz<<" "<<co<<" "<<ct<<endl;
        for(i=0;i<n;i++){
            if(cz-->0)
            nums[i]=0;
            else if(co-->0)
            nums[i]=1;
            else if(ct-->0)
            nums[i]=2;
        }
        cout<<"The sorted array is : "<<endl;
        for(i=0;i<n;i++)
        cout<<nums[i]<<" ";
    }
}