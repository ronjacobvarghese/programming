#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){
        int n;cin>>n;
        int a[n];int x;
        for(int i=0;i<n;i++){
            cin>>x;
            a[i]=log2(x);
        }
        for(int& i:a) cout<<i<<" ";
        cout<<endl;

    }

}