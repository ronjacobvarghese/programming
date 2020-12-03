#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    int b;cin>>b;
    a.erase(a.begin()+b-1);
    int p,q;cin>>p>>q;
    a.erase(a.begin()+p-1,a.begin()+q-1);
    cout<<a.size()<<endl;
    for(int& i:a) cout<<i<<" ";
    cout<<endl;
}