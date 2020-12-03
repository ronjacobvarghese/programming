#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){
        t--;
        int n;cin>>n;
        int b[]={1,3,6,10};
        string x=to_string(n);
        cout<<(n%10-1)*10+b[x.size()-1]<<endl;

    }
}