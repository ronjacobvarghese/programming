#include<iostream>

template<typename t>
void print(t a,t b){t c=a+b;std::cout<<"a+b="<<c<<std::endl;}
int main(){
    int x=1,y=2;
    print(x,y);
    print(1.1,2.2);
    print('A','1');
}