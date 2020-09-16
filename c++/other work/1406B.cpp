#include<iostream>
#include<algorithm>

int main(){
    int p;
    std::cin>>p;
    for(int j=0;j<p;++j){
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){std::cin>>a[i];}
    if(n==5){
        int s=1;
        for(int i=0;i<n;++i) s*=a[i];
        std::cout<<s<<"\n";
        continue; 
    }
    std::sort(a,a+n);
    int s=a[n-1];
    if (a[n-2]*a[n-3]>a[0]*a[1]) s*=a[n-2]*a[n-3];
    else s*=a[0]*a[1];
    if (a[n-4]*a[n-5]>a[2]*a[3]) s*=a[n-4]*a[n-5];
    else s*=a[2]*a[3];
    std::cout<<s<<"\n";
    }
    return 0;
}