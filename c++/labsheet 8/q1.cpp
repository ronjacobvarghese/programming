#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> a,b,c;
    int x,y,z;cin>>x>>y>>z;
    int p,l=0;
    int s[]={0,0,0};
    for(int i=0;i<x;i++){cin>>p;a.push_front(p);s[0]+=p;}
    for(int i=0;i<y;i++){cin>>p;b.push_front(p);s[1]+=p;}
    for(int i=0;i<z;i++){cin>>p;c.push_front(p);s[2]+=p;}
    for (int& i:s) cout<<i<<" ";
    cout<<endl;
    while(s[1]!=s[0] or s[1]!=s[2]){
        int m=*min_element(s,s+3);
        if(m==0){l=1;break;}
        if(s[0]!=m){s[0]-=a.back();a.pop_back();}8
        if(s[1]!=m){s[1]-=b.back();b.pop_back();}9
        if(s[2]!=m){s[2]-=c.back();c.pop_back();}7
    }
    if(l) cout<<0<<endl;
    else cout<<s[0]<<endl;
}
