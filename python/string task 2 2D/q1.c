#include <stdio.h>
void initiate(int a[10][10],int n,int m)
{   
    printf("elements?\n");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            scanf("%d",&a[r][c]);
        }
    }
}

int wiggly(int a[10][10],int n,int m)
{
    for(int r=0;r<n;++r)
    {
        if(r%2==0)
        {
            for(int c=0;c<m;++c)
            {
                printf("%d",a[r][c]);printf(" ");
            }
        }
        if(r%2!=0)
        {
            for(int c=m-1;c>=0;--c)
            {
                printf("%d",a[r][c]);printf(" ");
            }
        }
    }
}

int main()
{
    int a[10][10];
    int n,m;
    printf("rows?");
    scanf("%d",&n);
    printf("columns?");
    scanf("%d",&m);
    initiate(a,n,m);
    wiggly(a,n,m);

    return 0;
}
