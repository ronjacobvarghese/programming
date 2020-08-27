#include <iostream>
#include<string.h>
using namespace std;
static string nonrep(string str)
{
    int freq[256] = {0};
    int n = str.length();
    for (int i = 0; i < n; i++)
        freq[str.at(i)]++;
    for (int i = 0; i < n; i++)
    {
        char ch = str.at(i);
        if (freq[ch] == 1)
        {
            string res;
            res += ch;
            return res;
        }
    }
    return "-1";
}
int main()
{
    string str;
    getline(cin,str);
    cout << "First non-repeating character: " << nonrep(str);
}