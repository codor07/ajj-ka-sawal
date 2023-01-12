// Given a fixed-length integer array arr, duplicate each occurrence of zero, 
// shifting the remaining elements to the right.



#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){

        int n,i,j,c=0,k,flag=0;
        cout<<"Enter the array size : "<<endl;
        cin>>n;
    
        cout<<"Enter the array elements : "<<endl;
        k=n-1;
        vector<int>a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++){
            
            if(a[i]==0)
            c+=2;
            else
            c++;
            if(c>=n){
                if(c>n)
                flag=1;
            break;}
        }
        //cout<<i<<endl;
        for(j=i;j>=0;j--){
            if(j==i&&flag==1)
            {
                a[k]=a[j];
                k--;
            }
            else if(a[j]==0){
                a[k]=0;
                a[k-1]=0;
                k-=2;
            }
            else{
                a[k]=a[j];
                k--;
            }
        }
        cout<<"The array after given transformation is :"<<endl;
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}