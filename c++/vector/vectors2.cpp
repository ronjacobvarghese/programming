#include<bits/stdc++.h>
using namespace std;

void binary_search(vector<int> a,int x,int y,int k){
    int mid=(x+y)/2;
    cout<<mid<<endl;
    if(x==y){
        cout<<"The element cant be found "<<endl;
    }
    if(a.at(mid)==k){
        cout<<"The element has been found on position "<<mid<<endl;
        return;
    }
    else if(a.at(mid)>k){
        binary_search(a,x,mid,k);
    }
    else{
        binary_search(a,mid,y,k);
    }
}
int main(){
    vector<int> a;
    cout<<"Enter the length of the vector:";
    int n;cin>>n;
    cout<<"Enter the element of the vextor:"<<endl;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());//sort(starting address,ending address);
    cout<<"the sorted array is:";
    for(auto i=a.begin();i!=a.end();i++) cout<<*i<<" ";
    cout<<endl;
    cout<<"Enter the element u need to find: ";
    int k;cin>>k;
    binary_search(a,0,n-1,k);
}