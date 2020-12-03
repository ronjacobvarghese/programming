#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int p;
    cin>>s>>p;
    int a[26]={0};
    for(int i=0;i<s.length();i++){
        a[s[i]-97]+=1;
    }
    for(int l:a){
        cout<<l<<" ";
    }
    cout<<endl;
    int r=0;
    int m=*max_element(a,a+26);
    for(int l:a){
        if(l==m){
            r+=1;
        }
    }
    cout<<m*p+r<<endl;
}