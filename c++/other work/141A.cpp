#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;
    string c;
    cin>>c;
    string d;
    d=a+b;
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());
    if(d == c){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
