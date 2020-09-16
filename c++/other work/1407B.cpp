#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int tc;
    cin >>tc;
    for(int j=0;j<tc;j++){
    int n;
    cin>>n;
    int a[n];int max=0,d=0,s=0;
    for(int i=0;i<n;i++){cin>>a[i];if (max<a[i]){max=a[i];s=i;}}
    a[s]=-1;
    sort(a,a+n);
    cout<<max<<" ";
    int m=0;
    for (int k=0;k<n;k++){int gcd=__gcd(max,a[k]);if (m<=gcd){ m=gcd;s=k;}}
    cout<<a[s]
    a[s]=-1;
    for( int i)

    }
}