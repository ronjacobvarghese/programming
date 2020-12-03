#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){
        int n,k;cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int y=n-2;
        while(k){
            a[n-1]+=a[y--];k--;
        }
        cout<<a[n-1]<<endl;t--;
    }
}
