// You are given a string array words and a string s, 
// where words[i] and s comprise only of lowercase English letters.

// Return the number of strings in words that are a prefix of s.

#include<bits/stdc++.h>
typedef long long int  ll;
using namespace std;
int main(){
    
    string s;
    int n,i;
    cout<<"Enter the number of elements in string vector"<<endl;
    cin>>n;
    vector<string> words(n);
    cout<<"Enter the number elements of string vector"<<endl;
    for(i=0;i<n;i++)
    cin>>words[i];
    cout<<"Enter the string whose prefix is to be matched :"<<endl;
    cin>>s;
    int c=0;
        for(i=0;i<words.size();i++){
            if(words[i].length()<=s.length()){
                if(words[i]==s.substr(0,words[i].length()))
                c++;
            }
        }
        cout<<c;

}