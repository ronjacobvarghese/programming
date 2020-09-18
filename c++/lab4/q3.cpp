#include<iostream>

template<typename t>
void squares(t n){
    std::cout<<n*n<<std::endl;
}
int main(){
    int n;
    std::cout<< "Enter an integer:"<<std::endl;
    std::cin>>n;
    double m;
    std::cout<<"Enter an double:"<<std::endl;
    std::cin>>m;
    long o;
    std::cout<<"Enter an long:"<<std::endl;
    std::cin>>o;
    long long p;
    std::cout<<"Enter an long long:"<<std::endl;
    std::cin>>p;
    squares(n);
    squares(m);
    squares(o);
    squares(p);

}