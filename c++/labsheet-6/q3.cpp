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
    int c;cin>>c;
    int y;
    while(c){
        cin>>y;
        auto s=lower_bound(a.begin(),a.end(),y);
        if(*s==y) cout<<"Yes"<<" "<<s-a.begin()+1<<endl;
        else cout<<"No"<<" "<<s-a.begin()+1<<endl;
        c-=1;
    }
}