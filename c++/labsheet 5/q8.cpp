#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void myfunction(int a[], int n, int k)
{
    deque<int> b;
    for (int i = 0; i < k; i++)
    {
        b.push_back(a[i]);
    }
    int max = *max_element(b.begin(), b.begin() + k);
    cout << max << " ";
    for (int i = k; i < n; i++)
    {
        b.push_back(a[i]);
        if (b[0] == max)
        {
            b.pop_front();
            max = *max_element(b.begin(), b.end());
            cout << max << " ";
        }
        else
        {
            b.pop_front();
            if (a[i] > max)
            {
                max = a[i];
            }
            cout << max << " ";
        }
    }
    cout << "\n";
}
int main()
{
    int iterator;
    cin >> iterator;
    while (iterator > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        myfunction(a, n, k);
        iterator--;
    }
    return 0;
}            