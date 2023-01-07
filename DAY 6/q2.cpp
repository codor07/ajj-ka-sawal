#include<bits/stdc++.h>
//taking union of two arrays

using namespace std;
int main(){
    int n,m,i;
    cout<<"Enter the number of elements in first and second array : "<<endl;
    cin>>n>>m;
    int arr1[n],arr2[m];
    cout<<"Enter the elements of first array : "<<endl;
    for(i=0;i<n;i++)
    cin>>arr1[i];

    cout<<"Enter the elements of second array : "<<endl;
    for(i=0;i<m;i++)
    cin>>arr2[i];
    unordered_map<int,int>umap;
        for(i=0;i<n;i++)
        umap[arr1[i]]++;
        
        for(i=0;i<m;i++)
        umap[arr2[i]]++;
        
        vector<int>v;
        
        for(auto x : umap){
            v.push_back(x.first);
        }
        sort(v.begin(),v.end());
        
        for(auto x : v)
        cout<<x<<" ";
}