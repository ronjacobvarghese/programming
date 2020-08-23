#include<stdio.h> 
void main()
{
    int n;
    printf("legth of string:");
    scanf("%d",&n);
    char a[n];
    printf("Enter string:");
    scanf("%s",a);
    if(n%2!=0)
    {
        printf("not possible");
    }
    else{
        for(int i=0;i<n;i=i+2)
        {
            char t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        printf("%s",a);
    }
}