// Given two integer arrays nums1 and nums2, return an array of their intersection. 
// Each element in the result must be unique and you may return the result in any order.


#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    int n,m,i;
    cout<<"Enter the size of first array : "<<endl;
    cin>>n;
    cout<<"Enter the elements of first array : "<<endl;
    vector<int>nums1(n);
    for(i=0;i<n;i++)
    cin>>nums1[i];
    cout<<"Enter the size of second array : "<<endl;
    cin>>m;
    cout<<"Enter the elements of second array : "<<endl;
    vector<int>nums2(m);
    for(i=0;i<m;i++)
    cin>>nums2[i];

    unordered_map<int,int>m1,m2;
        
        for(auto x :nums1)
        m1[x]++;
        vector<int>ans;
        for(auto x:nums2)
        m2[x]++;


        for(auto x:m1)
       {
           if(m2.find(x.first)!=m2.end())
           ans.push_back(x.first);
       }
        for(auto x :ans)
        cout<<x<<" ";

}