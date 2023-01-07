//printing the pattern

#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : "<<endl;
    cin>>n;
    int i,j;
    for(i=1;i<=(2*n-1);i++)
    cout<<"* ";
    cout<<endl;

    for(i=2;i<=n;i++){
        
            for(j=1;j<=i-1;j++)
                cout<<"  ";

            cout<<"* ";

            for(j=1;j<=((2*n)-1-(2*i));j++)
            cout<<"  ";

            if(i!=n)
            cout<<"* "<<endl;
        }
    
}