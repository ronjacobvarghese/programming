#include<stdio.h>
void initiate(int a[10][10],int n,int m)
{
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            scanf("%d".&a[r][c]);
        }
    }
}
void main()
{
    int a[10][10];
    int a1,b1;
    int a2,b2;
    int n,m;
    printf("rows?");scanf("%d",&n);
    printf("columns");scanf("%d",&m);
    initiate(a,n,m);
    printf("a1,b1?");scanf("%d%d",&a1,&b1);
    printf("a2,b2?");scanf("%d%d",a2,b2);
    int k;
    printf("iterations?");scanf("%d",&k);
    for(int i=0;i<=k;++i)
    {
        for(int r=0;r<n;++r)
        {
            for(int c=0;c<m;++c)
            {
                
            }
        }
    }
}
