#include<stdio.h>
#include<string.h>
void printmatrix(char a[10][5][1000])
{
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<5;++j)
        {
            printf("%s",a[i][j]);
        }
    }
    printf("\n");
}
int read(char a[10][5][1000])
{
    static int i=0,j=0;
    int n,f;
    printf("No of books to be added-");
    scanf("%d",&n);
    if(i>9)
    {
        printf("capacity full");
        return 0;
    }
    while(i<10)
    {
        while(j<5)   
        {
            printf("title of book-");
            scanf("\n%[^\n]s",a[i][j]);
            ++j;
            n-=1;
            if(n==0)
            {
                printmatrix(a);
                return 0;
            }
            
        }
        ++i;j=0;
    }
}
int search(char a[10][5][1000])
{
    printf("enter the book u are searching for-");
    char s[1000];
    scanf("%s",s);
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<5;++j)
        {
          
            if(strcmp(a[i][j],s)==0)
            {
                printf("cupboard-%d rack-%d\n",i+1,j+1);
                return 0;
            }
            
        }
    }
    printf("Not found");
}
void main()
{
    char a[10][5][1000];
    int l=0;
    while(l!=1)
    {
        int c;
        printf("1-enter books\n2-search a book\n3-exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:read(a);break;
            case 2:search(a);break;
            case 3:l=1;break;
            default:printf("Wrong Value");break;
        }
    }
}