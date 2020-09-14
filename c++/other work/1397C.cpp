#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int  i=0;i<n;i++){
        cin>>a[i];
    }
    if (n==1){
        cout<<1<<" "<<1<<"\n";
        cout<<-a[0]<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<0<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<0;
        return 0;
    }
    cout<<1<<" "<<n<<"\n";
    for(int i=0;i<n;i++){
        cout<<-a[i]*n<<" ";
        a[i]-=a[i]*n;
    }
    cout<<"\n";
    cout<<1<<" "<<n-1<<"\n";
    for(int i=0;i<n-1;i++)
    {
        cout<<-a[i]<<" ";
        a[i]=0;
    }
    cout<<"\n";
    cout<<n<<" "<<n<<"\n";
    cout<<-a[n-1]<<"\n";
    return 0;

}
