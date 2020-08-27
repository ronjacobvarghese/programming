#include <bits/stdc++.h>
using namespace std;

bool rot(string str1, string str2)
{

    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

int main()
{
    string str1, str2;
    cout << "Enter the string 1" << endl;
    cin >> str1 ;
    cout <<"Enter the string 2:";
    cin >>str2 ;
    if (rot(str1, str2))
        printf("True");
    else
        printf("False");
    return 0;
}