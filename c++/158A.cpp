#include<iostream>
int main(){
    int n,k;
    std:: cin >>n >>k;
    int a[n];
    for(int i=0;i<n;++i)
    {
        int x;
        std::cin>>x;
        a[i]=x;
    }
    int s=a[k-1];
    int r=0;
    for(int i=0;i<n;++i){
        if (a[i]>=s && a[i]!=0){
            r+=1;
        }
    }
std::cout << r <<std::endl;
return 0;
}
