#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> a;
    vector<int>::iterator itr;
    
    int n,x;
    cout<<"enter the no of integer\n";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }

    int erase_pos; 
    cout<<"enter  the position to delete from"<<a.size()<<endl;
    cin>>erase_pos;
    a.erase(a.begin() + erase_pos);
    int i,j;
    cout<<"enter  the position to delete from"<<a.size()<<endl;
    cin>>i>>j;
    a.erase(a.begin()+i,a.begin()+j);

    cout<<"The size is:"<<a.size()<<endl;

    for(itr = a.begin(); itr<a.end();itr++){
        cout<<*itr<<" ";
    }

    a.clear();
    return 0;
}