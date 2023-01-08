// Given a sorted array A[] of N positive integers having all 
// the numbers occurring exactly twice,
//  except for one number which will occur only once. 
//  Find the number occurring only once.



#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of elements in array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }int i,st=0,en=n-1,ans,mid;
	    while(st<=en){
	        mid=st+(en-st)/2;
	        if(mid==0){
    	        if(a[mid]!=a[mid+1])
    	        {
    	            ans=a[mid];
    	            break;
    	        }
	        }
	        if(mid==n-1){
    	        if(a[mid]!=a[mid-1])
    	        {
    	            ans=a[mid];
    	            break;
    	        }
	        }
	        if(a[mid]!=a[mid-1]&&a[mid]!=a[mid+1])
	        {
	            ans=a[mid];
	            break;
	        }
	        
	        
	        if(mid%2==1){
	            if(a[mid]==a[mid-1])
	                st=mid+1;
	               else
	               en=mid-1;
	        }
	        else{
	            if(a[mid]==a[mid+1])
	            st=mid+1;
	            else
	            en=mid-1;
	        }
	    }
	   cout<<ans<<endl;
}