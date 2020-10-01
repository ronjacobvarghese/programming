#include <iostream>
#include <vector>
#include <algorithm>

void func(std::vector<int>& a)
{
    int c;
        std::cout << "enter the array element:";
        int x;
        std::cin >> x;
        a.push_back(x);
    std::cout << "Do u wish to continue(1,0):";
    std::cin >> c;
    if (c == 0) return;
    func(a);
}

int main()
{
    std::vector<int> a;
    func(a);
        std::sort(a.begin(), a.end());
    for (int &i : a)
        std::cout << i << " ";
}