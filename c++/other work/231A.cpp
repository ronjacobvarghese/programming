#include<iostream>
int main(){
    int n;
    std::cin >> n;
    int s=0;
    for(int i=0;i<n;++i){
            int a,b,c;
            std::cin >> a>> b>> c;
            if(a+b+c>1){
                s+=1;
            }
    }
    std::cout <<s<<std::endl;
    return 0;
}

