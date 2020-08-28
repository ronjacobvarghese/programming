#include<iostream>
int main()
{
    int n,m;
    std::cin >>n >>m;
    int x,y;
    std::cin >>x>>y;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        int j;
        std::cin >> j;
        a[i]=j;
    }
    for(int i=0;i<m;i++){
        int j;
        std::cin >> j;
        b[i]=j;
    }
    if (a[x-1]<b[m-y]) std::cout << "YES" << "\n";
    else std::cout << "NO"<<"\n";
}