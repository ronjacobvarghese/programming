#include<iostream>
void printl(int array[],int no){
for(int i=0;i<no;i+=1){
    std::cout<<i<<'o'<<std::endl;
    std::cout<<array[i];
}
std::cout<<std::endl;
}
int main(){
    int a[5]={1,2,3,4,5};
    printl(a,5);
    for(int i=0;i<5;++i){
    
    }
}