#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    string b;
    cin>>b;
    int s=0;
    for(char& i:a){
        for(char& j:b){
            if(i==j){
                s+=1;
                j='-';
            }
        }
    }
    cout<<b<<endl;
    cout<<s<<endl;
}