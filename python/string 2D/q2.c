#include <stdio.h>
int sum(int x,int s)
{
     s+=x;
     return s;}
int maxi(int s)
{
    static int max;
    if(max<s)
        {max=s;}
    return max;
}

int main()
{
    int a[10][10];
    int n,m,s=0,max=-1;
    printf("rows?");
    scanf("%d",&n);
    printf("columns?");
    scanf("%d",&m);
    for(int r=0;r<n;++r)
    {
        for(int c=0;c<m;++c)
        {
            scanf("%d",&a[r][c]);
            s=sum(a[r][c],s);
        }
        max=maxi(s);
        s=0;

    }
    printf("maximum row sum:%d",max);
    return 0;
}
