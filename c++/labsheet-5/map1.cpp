#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, map<string, int>> m;

    map<int, map<string, int>>::iterator it;
    map<string, int>::iterator in;

    m.insert(make_pair(1, map<string, int>()));
    m[1].insert(make_pair("January", 31));

    m.insert(make_pair(2, map<string, int>()));
    m[2].insert(make_pair("February", 28));

    m.insert(make_pair(3, map<string, int>()));
    m[3].insert(make_pair("March", 31));

    m.insert(make_pair(4, map<string, int>()));
    m[4].insert(make_pair("April", 30));

    m.insert(make_pair(5, map<string, int>()));
    m[5].insert(make_pair("May", 31));

    m.insert(make_pair(6, map<string, int>()));
    m[6].insert(make_pair("June", 30));

    m.insert(make_pair(7, map<string, int>()));
    m[7].insert(make_pair("July", 31));

    m.insert(make_pair(8, map<string, int>()));
    m[8].insert(make_pair("August", 31));

    m.insert(make_pair(9, map<string, int>()));
    m[9].insert(make_pair("September", 30));

    m.insert(make_pair(10, map<string, int>()));
    m[10].insert(make_pair("October", 31));

    m.insert(make_pair(11, map<string, int>()));
    m[11].insert(make_pair("November", 30));

    m.insert(make_pair(12, map<string, int>()));
    m[12].insert(make_pair("December", 31));

    string input;
    int key;
    cout << "Enter the month of the year\n";
    cin >> input;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (in = it->second.begin(); in != it->second.end(); in++)
        {
            if (in->first == input)
            {
                cout << in->second << endl;
                key = it->first;
                break;
            }
        }
    }
    auto itr = m[(key - 1)];
    auto prev = itr.begin();
    cout << "The previous month is--->" << prev->first << endl
         << "no of days is-->" << prev->second << endl;
    auto ptr = m[(key + 1)];
    auto next = ptr.begin();
    cout << "The next month is--->" << next->first << endl
         << "no of days is-->" << next->second << endl;

    return 0;
}