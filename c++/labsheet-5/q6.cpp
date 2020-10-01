#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        switch(x){
        case 1:a.insert(y);break;
        case 2:a.erase(y);break;
        case 3:if(a.find(y)==a.end()) cout<<"No"<<endl;else cout<<"Yes"<<endl;break;
        }
    }

}