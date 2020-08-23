#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    printf("string:");
    scanf("%s",a);
    char b[10];
    int s=1;
    for(int i=0;i<strlen(a);++i){
        int l=1;
        if(i==0)
        {
            b[0]=a[0];
        }
        else{
        for(int j=0;j<strlen(b);++j)
        {
            if (a[i]==b[j]){
                l=0;
                break;
            }
        }
        if (l)
        {
            b[s]=a[i];
            s+=1;
        }
        }
    }
    int d,r=0;
    for(int i=0;i<s;++i)
    {
        d=0;
        for(int j=0;j<strlen(a);++j)
        {
            if(b[i]==a[j])
            {
                d+=1;
            }
        }
        if(d>r){
            r=d;
        }
        
    }
    printf("%d",r);
    
}