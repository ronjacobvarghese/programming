#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);int j=0;
    for(string::iterator i= str.begin();i!=str.end();++i){
        if(*i=='('){
            j+=1;
        }
        if(*i==')'){
            j-=1;
        }
    }
    if(j==0)cout<<"Valid"<<"\n";
    else cout<<"Invalid"<<"\n";
    return 0;
}   