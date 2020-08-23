#include <stdio.h>
void trans(int a[10][10],int n,int m)
{
    printf("the transpose\n");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            printf("%d",a[c][r]);printf("  ");
        }
        printf("\n");
        
    }
}

void main()
{
    int a[10][10];
    int n,m;
    printf("rows?");
    scanf("%d",&n);
    printf("columns?");
    scanf("%d",&m);
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            scanf("%d",&a[r][c]);
        }
    }

    trans(a,n,m);
}
