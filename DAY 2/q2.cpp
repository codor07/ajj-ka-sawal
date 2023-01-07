// removing vowels from string 

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline (cin,s);
    //cout<<s<<endl;
    cout<<s.length();
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
        cout<<s[i];
    }
}