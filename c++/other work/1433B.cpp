#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){
        int n;cin>>n;
        int a[n],s=0,l=0;
        for(int i=0;i<n;i++){cin>>a[i];if(a[i]==1) l=1;if(a[i]==0 && l==1) s+=1;}
        int i=n-1;
        while(a[i]==0){s-=1;i-=1;}
        cout<<s<<endl;t--;
    }
}