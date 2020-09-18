#include<iostream>
#include<string>
#include<iomanip>
template<typename t>
void fibonacci(int n,t x,t y){
    double s=x+y;
    std::cout<<s<<std::endl;
    if(n) fibonacci(n-1,y,x+y);
    else {std::cout<<"\n";return ;}
}
int main(){
    int n;
    std::cout<<"Enter the limit:"<<std::endl;
    std::cin>>n;
    std::string c;
    std::cout<<"Following datatypes:float,int,long,long long"<<std::endl;
    std::cout<<"Enter the datatype u want:"<<std::endl;
    std::cin>>c;

    if(c=="float") {fibonacci(n,0.1,1.1);}
    else if(c=="int") fibonacci(n,0,1);
    else if(c=="long"){long x=0,y=1; fibonacci(n,x,y);}
    else if(c=="long long"){long long x=0,y=1; fibonacci(n,x,y);}
}