#include<iostream>
#include <bits/stdc++.h>
#include <vector>
//Fastest input of integers

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int test;
    std::cin>>test;

    for(int z=1;z<=test;z++)
    {
            int a,k;
            std::cin >> a>>k;
            if(a==k)std::cout<<0<<std::endl;
            else if(a==0 && k!=0)std::cout<<k<<std::endl;
            else if(k==0 && a!=0)
            {
                if(a%2==0)std::cout<<0<<std::endl;
                else std::cout<<a<<std::endl;
            }
            else std::cout<<abs(a-k)<<std::endl;
            

    }

    return 0;
}