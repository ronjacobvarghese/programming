#include <bits/stdc++.h>

using namespace std;

string Balance(string a)
{
    stack<char> s1;
    for (size_t i = 0; i < a.length(); i++)
    {

        if (a[i] == '{' || a[i] == '(' || a[i] == '[')
            s1.push(a[i]);

        else if ((!s1.empty() && a[i] == '}' && s1.top() == '{') || (!s1.empty() && a[i] == ']' && s1.top() == '[') || (!s1.empty() && a[i] == ')' && s1.top() == '('))
            s1.pop();

        else
            return "NO";
    }
    if (s1.empty())
        return "YES";
    else
        return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string a;
        getline(cin, a);

        string result = Balance(a);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}