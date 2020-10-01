#include<iostream>
#include<vector>

int main(){
    std::vector<int> a;
    while(true){
        int x;
        std::cout<<"Enter a integer:"<<std::endl;
        std::cin>>x;
        a.push_back(x);
        int c;
        std::cout<<"Do u wish to continue(1,0):";
        std::cin>>c;
        if(c==0) break; 
    }
    for(int& i:a) std::cout<<i<<" ";
}