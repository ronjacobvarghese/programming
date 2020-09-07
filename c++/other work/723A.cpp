#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    int a[3];
    for (int i=0;i<3;i++){
        int x;
        cin >>x;
        a[i]=x;
    }
    sort(a,a+3);
    cout<<abs(a[2]-a[0]);
}