#include<iostream>

class Box{
    private:
        double length;
        double breath;
        double height;
    public:
        void rectangle();
    void rectangle(double l,double h,double b){
            length=l;
            breath=b;
            height=h;
    }
    void set_length(double l){
        length=l;
    }
    void set_breath(double b){
        breath=b;
    }
    void set_height(double h){
        height=h;
    }
    void print(){
        std::cout <<" length,breath,height:"<<length<<","<<breath<<","<<height<<std::endl;
    }

};

int main(){
    Box driver;
    int l,b,h;
    driver.rectangle(10.8,8.6,15.5);
    std::cout <<"The original constructor's";
    driver.print();
    std:: cout <<"Enter the length,height,breath:";
    std::cin>>l>>b>>h;
    driver.set_length(l);
    driver.set_breath(b);
    driver.set_height(h);
    std::cout<<"The modified constructor's";
    driver.print();
    Box r1;
    r1=driver;
    std::cout <<"The copied contructor's";
    r1.print();
    return 0;


}