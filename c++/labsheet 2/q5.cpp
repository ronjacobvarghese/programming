#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, n;
    string str[10], s = "";
    cout << "Enter Size:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (i = 0; i < str[1].length(); i++)
    {
        for (j = 0; j < n; j++)
        {
            if (str[1][i] != str[j][i])
            {
                if (s=="")cout << -1;
                else cout << "Longest Common Prefix: " << s << endl;

                return 0;
            }
        }
        s = s + str[1][i];
    }
    cout<<"Longest Common Prefix: " << s << endl;

    return 0;
}