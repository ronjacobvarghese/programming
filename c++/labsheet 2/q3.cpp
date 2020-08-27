
#include <bits/stdc++.h>
#include<strings.h>
#include<string>
using namespace std;
bool valid(string str)
{
    stack<char> s;
    char x;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (str[i])
        {
        case ')':

            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }


    return (s.empty());
}

int main()
{
    string str;
    cin >> str;

    if (valid(str))
        cout << "True";
    else
        cout << "False";
    return 0;
}