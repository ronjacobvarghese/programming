#include <stdio.h>
int sum(int x)
{   static int s;
    s+=x;
}
int upper(int a[10][10],int n,int m)
{
    int s;
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            if(r>c)
            {
                a[r][c]=0;
            }
            else
            {
              s=sum(a[r][c]); 
            }
        }
    }
    return s;
}
void printmatrix(int a[10][10],int n, int m)
{
    printf("the matrix\n");
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            printf("%d",a[r][c]);printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    int a[10][10];
    int n,m,s=0;
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
    s=upper(a,n,m);
    printmatrix(a,n,m);
    
    printf("The sum=%d",s);
}
