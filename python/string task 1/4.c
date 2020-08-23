
#include<stdio.h>
int main()
{
    int n;
    printf("Input length:");
    scanf("%d",&n);
    char a[n];
    printf("enter string:");
    scanf("%s",a);
    int i,j;
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if(a[i]==a[j])
                {
                    printf("No");
                    return 0;
                }
            }
        }
        printf("Yes");
}