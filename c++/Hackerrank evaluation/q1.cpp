#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a;
    cin>>n>>a;
    int l[n];
    for(int i=0;i<n;i++) cin>>l[i];
    int d=0;
    for(int& i:l) d+=i;
    if(d<a/2){cout<<"NO\n";return 0;}
    if(w==0){cout<<"NO\n";return 0;}
    cout<<"Yes\n";
}
