#include<bits/stdc++.h>
int main(){
    int n;std::cin>>n;
    int a[n+2];a[0]=0;for(int i=1;i<=n;i++) std::cin>>a[i];
    a[n+1]=0;
    int i=1,x,y,s,d,r=0;
    while (i<n+2){
        if(a[i]<0){
            x=i-1,y=i+1;
            s=0;d=0;
            while(x>0){
                s+=a[x--];
                if(s==0) break;
                if(s>-a[i]) break;
                if(s<a[i]) break;
                if(s==-a[i]){r+=1;break;}
            }
            while(y<n+1){
                d+=a[y++];
                if(d>-a[i]) break;
                if(d<a[i]) break;
                if(d==0) break;
                if(d==-a[i]){r+=1;break;}
            }
        }
        i++;
    }
    std::cout<<r<<std::endl;
}