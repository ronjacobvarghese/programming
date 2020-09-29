#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student
{
    int id;
    string name;
    float cgpa;
};
bool myfunc(const student &a, const student &b){
    return a.cgpa<b.cgpa;
}
int main()
{
    student s[3];
    vector<student> a;
    vector<student>::iterator itr;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter id -";
        cin>>s[i].id;
        cout<<"Enter Name-";
        cin>>s[i].name;
        cout<<"Enter CGPA-";
        cin>>s[i].cgpa;
        a.push_back(s[i]);
    }
    sort(a.begin(),a.end(),myfunc);
    for(itr=a.begin();itr<a.end();itr++){
        cout<<"The id is:"<<itr->id<<endl;
        cout<<"The name is:"<<itr->name<<endl;
        cout<<"The cgpa is:"<<itr->cgpa<<endl;
    }
    return 0;
}
