#include <bits/stdc++.h>
using namespace std;

priority_queue<vector<int>> p;

void max_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}


int main()
{

    vector<int> a{10, 20, 30, 40};
    vector<int> b{10, 20, 35, 40};
    vector<int> c{30, 25, 10, 50};
    vector<int> d{20, 10, 30, 40};
    vector<int> e{5, 10, 30, 40};

    p.push(a);
    p.push(b);


    max_vector(
p.top
());

    p.push(c);

    max_vector(
p.top
());

    p.push(d);
    p.push(e);

    max_vector(
p.top
());

    return 0;
}