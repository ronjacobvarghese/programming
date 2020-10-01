#include<iostream>
#include<vector>

int main(){
    std::vector<std::string> a;
    while(true){
        std::string x;
        std::cout<<"Enter a string:"<<std::endl;
        std::cin>>x;
        a.push_back(x);
        int c;
        std::cout<<"Do u wish to continue(1,0):";
        std::cin>>c;
        if(c==0) break; 
    }
    for(std::string& i:a) std::cout<<i<<" ";
}