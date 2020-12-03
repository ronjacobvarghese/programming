#include <bits/stdc++.h>
using namespace std;
void add(int i)
{
    i = i + 5;
    cout << i << " ";
}
int main()
{
    int flag1 = 0;
    vector<int> v = {20, 25, 25, 50, 40, 22, 25, 45, 42, 44, 33, 35, 44, 48};
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            flag1 = 1;
            break;
        }
    }
    if (flag1 == 1)
        cout << "All marks are not odd." << endl;
    else
        cout << "All marks are odd." << endl;
    cout << "The following are odd: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 != 0)
        {
            cout << v[i] << endl;
        }
    }
    int flag2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 20)
        {
            flag2 = 1;
            break;
        }
    }
    if (flag2 == 1)
        cout << "Not all marks are above 20";
    else
        cout << "All marks are 20 or above.";
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 50)
        {
            cout << "Yes, 50 is there." << endl;
            break;
        }
    }
    int flag3 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            flag3 = 1;
            break;
        }
    }
    if (flag3 == 1)
        cout << "There are negative marks." << endl;
    else
        cout << "There are no negative marks. " << endl;
    cout << "After adding 5 to each value: " << endl;
    for_each(v.begin(), v.end(), add);
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 44)
        {
            cout << "44 is in " << i + 1 << "th position. " << endl;
        }
    }
    cout << "Average is: " << (float)accumulate(v.begin(), v.end(), 0) / v.size() << endl;
    int n = v.size();
    int temp;
    cout << "After sorting: " << endl;
    while (n > 0)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
        n = n - 1;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i + 1] - v[i] << " ";
    }
    cout << endl;
    vector<int> v2 = {30, 44, 35, 22, 38, 49, 33, 41, 44, 43, 25, 39, 33, 38};
    v.insert(v.end(), v2.begin(), v2.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
