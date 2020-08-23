
#include <stdio.h>
int sum(int x)
{
    static int s;
      s+=x;
      return s;
}
int maxi(int x)
{   static int max;
    if(max<x)
    {
        max=x;
    }
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
            if(c==m-1-r)
            {
                s=sum(a[r][c]);
                max=maxi(a[r][c]);
                
            }    
        }
    }
    printf("anti dia sum:%d,max element:%d",s,max);
    return 0;
}
