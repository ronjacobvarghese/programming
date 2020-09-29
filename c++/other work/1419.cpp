#include <iostream>
#include <algorithm>
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) std::cin >> a[i];
    if (n == 2)
        {std::cout<<0<<"\n";for(int i:a) std::cout<< i << " ";;std::cout<<"\n";}
    else
    {
        std::sort(a, a + n);
        int b[n], j = 1;
        for (int i = 0; i < n; i += 2)
            b[i] = a[n - j++];
        j = 0;
        for (int i = n - 2; i > -1; i -= 2)
            b[i] = a[j++];
        std::cout << n / 2 << "\n";
        for (int i = 0; i < n; i++)
            std::cout << b[i] << " ";
        std::cout << "\n";
    }
}