#include<iostream>
#include<set>
#include<utility>
#include<map>
#include<vector>
using namespace std;
int main(){
    map<string,int,greater<string>> a;
    cout<<"Enter the number of students u want to add:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int roll_no;
        cout<<"Enter roll no:";
        cin>>roll_no;
        string name;
        cout<<"Enter name:";
        cin>>name;
        a.emplace(name,roll_no);
    }
    cout<<"The name in descending order:"<<endl;
    for(auto& l:a) cout<<l.first<<" "<<l.second<<endl;
    map<string,int>b(a.begin(),a.end());
    cout<<"The name in ascending order:"<<endl;
    for(auto& l:b) cout<<l.first<<" "<<l.second<<endl;
    vector<pair<int,string>>c;
    cout<<"The roll_no in ascending order:"<<endl;
    for(auto& l:a)c.push_back(make_pair(l.second,l.first));
    for(auto& l:c)cout<<l.first<<" "<<l.second<<endl;
    map<int,string,greater<int>>d(c.begin(),c.end());
    cout<<"The roll_no in descending order:"<<endl;
    for(auto& l:d) cout<<l.first<<" "<<l.second<<endl;
}