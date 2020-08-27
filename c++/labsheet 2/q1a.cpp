#include<string>
#include<iostream>
using namespace std;

int main(){
    string str1="string class is part of C++ library";
    cout<<str1<<"\n";
    string str2(str1,1,12);
    cout<< str2 <<"\n";
    cout << "Beginning element:" << str1.at(0)<<"\n";
    cout << "Middle element:" << str1.at(str1.size()/2)<<"\n";
    cout << "Last element:" << str1.at(str1.size()-1)<<"\n";
    str2.append("object");
    cout<< str2 <<"\n";
    string str3="Hello Hello Hello";
    cout << "The first index of Hello is:" << str3.find("Hello") << "\n";
    cout <<"The current string for str3:"<<str3<<"\n";
    string s="Hello";
    cout << str3.replace(str3.rfind(s),s.size(),"\0");

}
