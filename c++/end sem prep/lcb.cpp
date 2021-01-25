#include <bits/stdc++.h>
using namespace std;
int MAX(int a1, int b1);
int SUB(string a1, string b1, int a2, int b2)//To Find the LCS of 2 Strings
{
    if (a2 == 0 || b2 == 0) 
        return 0;
    if (a1[a2 - 1] == b1[b2 - 1]){
        return 1 + SUB(a1, b1, a2 - 1, b2 - 1);
    }
    else{
        return (SUB(a1, b1, a2, b2 - 1), SUB(a1, b1, a2 - 1, b2));}
}

int MAX(int a1, int b1)
{
    return (a1 > b1) ? a1 : b1;
}

int main()
{
    string a1,b1;
    cin>>a1>>b1; //Enter Lenght of String a1&b1
    int a2 = a1.length(), b2= b1.length();//Takes Length of String a1&b1
    int L=SUB(a1,b1,a2,b2);
    if(L==b2)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    return 0;
}