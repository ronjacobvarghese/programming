#include <bits/stdc++.h>
#include <queue>

using namespace std;

void showpq(priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> y)
{
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> x = y;
    vector<int> tp = x.top();
    cout << "The vector minumum is :" << endl;
    for (int i = 0; i < tp.size(); i++)
    {
        cout << tp[i] << " ";
    }
    cout << endl;
}

int main()
{

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;

    vector<int> a{10, 20, 30, 40};
    vector<int> b{10, 20, 35, 40};
    vector<int> c{30, 25, 10, 50};
    vector<int> d{20, 10, 30, 40};
    vector<int> e{5, 10, 30, 40};
    q.push(a);
    q.push(b);
    q.push(c);
    q.push(d);
    q.push(e);

    showpq(q);

    return 0;
}