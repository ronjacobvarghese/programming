#include<iostream>
int main(){
    int n,h;
    std::cin >>n>>h;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        if (x<=h) s+=1;
        else s+=2;
    }
    std::cout << s << "\n";
}