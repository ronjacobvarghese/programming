#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t){t--;
        int a,b;cin>>a>>b;
        cout<<(a^(a&b))+(b^(a&b))<<endl;
    }
}