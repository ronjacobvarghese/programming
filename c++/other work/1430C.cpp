#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){
        t--;
        int n;cin>>n;
        int x=n,y=n-1;
        cout<<2<<endl;
        while(y!=0){
            cout<<x<<" "<<y<<endl;
            x=(x+y)%2?((x+y)/2+1):((x+y)/2);y-=1;
        }
    }
}