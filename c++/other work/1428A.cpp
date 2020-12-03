#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){
        int a[2];
        int b[2];
        cin>>a[0]>>a[1];
        cin>>b[0]>>b[1];
        if(a[0]==b[0]||a[1]==b[1]) cout<<abs(a[0]-b[0]+a[1]-b[1])<<endl;
        else cout<<abs(a[0]-b[0])+abs(a[1]-b[1])+2<<endl;t--;
    }
}