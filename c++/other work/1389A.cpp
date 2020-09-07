#include<iostream>
int main(){
    int n;
    std::cin  >>n;
    while(n!=0){
        int l,r;
        std::cin >>l>>r;
        if (r<l*2){std::cout <<-1<<" "<<-1<<"\n";}
        else {std::cout << l <<" "<<l*2<<"\n";}
        n--;
    }
}
