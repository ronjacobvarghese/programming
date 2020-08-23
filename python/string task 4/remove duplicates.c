#include<stdio.h>
#include<string.h>
void main()
{
    char c[20];
    printf("string:");
    scanf("%s",c);
    for(int i=0;i<strlen(c);++i)
    {
        for(int j=i+1;j<strlen(c);++j)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<strlen(c)-1;++k)
                {
                    a[k]=a[k+1];
                }
            }
        }
    }
    printf("%s",c);
}