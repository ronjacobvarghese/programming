#include<iostream>
template <typename t>
class q4
{
private:
    t n;
    t m;
public:
    void setn(t x){n=x;}
    void setm(t y){m=y;}
    t getmax(){
        if(n==m) return n;
        return n?m n:m;
    }
};
int main(){
    q4<int> obj1;
    int n,m;
    std::cout<<"Enter the two integers:"<<std::endl;
    std::cin>>n>>m;
    obj1.setn(n);obj1.setm(m);
    std::cout<<"The largest integer value is:"<<obj1.getmax()<<std::endl;
    float p,q;
    q4<float> obj2;
    std::cout<<"Enter the two floats:"<<std::endl;
    std::cin>>p>>q;
    obj2.setm(p);
    obj2.setn(q);
    std::cout<<"The largest float value is:"<<obj2.getmax()<<std::endl;
}
