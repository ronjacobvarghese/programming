#include<iostream>
int n=2,a,b,D[6],s;
int main()
{
    for(std::cin>>a>>b;n<6;s+=abs(D[n++]))
    {
        while(a%n==0)a/=n,D[n]++;
        while(b%n==0)b/=n,D[n]--;
    }
    for(int i=0;i<6;i++){
        std::cout<<D[i]<<std::endl;
    }
    std::cout<<(a-b?-1:s);
}