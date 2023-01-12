#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    int n,i,k,flag=1;
    cout<<"Enter the array size : "<<endl;
    cin>>n;
    cout<<"Enter k :"<<endl;
    cin>>k;
    cout<<"Enter the array elements : "<<endl;
    vector<int>a(n);
    for(i=0;i<n;i++)
    cin>>a[i];

    unordered_map<int,int>umap;
        for(i=0;i<n;i++){
            umap[a[i]]++;
            if(umap[a[i]]==k){
                cout<<a[i]<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<-1<<endl;
}