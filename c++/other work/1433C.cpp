#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n,l=1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin>>a[i];
        for(int& i:a) if(i!=a[0]) l=0;
        if (l)
            cout << -1 << endl;
        else
        {
            int m=*max_element(a,a+n);
            auto j = find(a, a+n,m) + 1;
            if (j - a!= 1)
                cout << j-a << endl;
            else
            {
                while (*j == *(j - 1)) j++;
                cout << j - a<< endl;
            }
        }
        t--;
    }
}