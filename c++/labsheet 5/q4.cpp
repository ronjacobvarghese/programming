#include<iostream>
#include<vector>
struct student{
    int id;std::string name;float cgpa;
};
void myfunc(std::vector<student>& a){
    std::cout<<"enter the no of students to be added:";
    int n;
    std::cin>>n;
    while(n!=0){
        student x;
        std::cout<<"Enter the student id:";
        std::cin>>x.id;
        std::cout<<"Enter the student name:";
        std::cin>>x.name;
        std::cout<<"Enter the student cgpa";
        std::cin>>x.cgpa;
        a.push_back(x);n--;
    }
    std::cout<<"Want to add more students(1/0):";
    int c;std::cin>>c;
    if(c==0) return;
    myfunc(a);
}
int main(){
    std::vector<student> a;
    myfunc(a);
    student* s=&a[0];
    for(student& i:a) s=(*s).cgpa<i.cgpa?&i:s;
    std::cout<<"The details of the student with the highest cgpa:"<<std::endl<<(*s).id<<std::endl<<(*s).name<<std::endl<<(*s).cgpa<<std::endl;
}