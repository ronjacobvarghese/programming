#include<stdio.h>
int multi(int *x,int *y)
{
    int m;
    m=(*x)*(*y);
    return m;
}
void main()
{
    int *x,*y;
    int a,b;
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    x=&a;
    y=&b;
    printf("%d",multi(x,y));
}