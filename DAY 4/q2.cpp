//rotating the matrix 90 degress


#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of rows and columns : "<<endl;
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elements of matrix : "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m/2;j++){
            swap(a[i][j],a[i][m-1-j]);
        }
    }
 
    for(i=0;i<n;i++){
        for(j=0;j<m-i-1;j++){
            swap(a[i][j],a[m-j-1][n-i-1]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}