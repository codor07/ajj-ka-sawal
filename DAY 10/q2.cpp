// Given a String S, reverse the string without reversing its individual words.
// Words are separated by dots.

#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    cout<<"Enter the string : "<<endl;
    string s;
    cin>>s;
    string ans="",ss="";
        int i,n=s.length();
        for(i=n-1;i>=0;i--){
            if(s[i]=='.'||i==0){
                if(i==0){
                    ss+=s[0];
                    reverse(ss.begin(),ss.end());
                    ans+=ss;
                    break;
                }
                reverse(ss.begin(),ss.end());
                    ans+=ss;
                ans+='.';
                ss="";
                
            }
            else
            ss+=s[i];
        }
        cout<<ans<<endl;
}