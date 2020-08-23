/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the lengths of strings");
    scanf("%d %d",&n,&m);
    printf("Enter stringA:");
    char a[n],b[m];
    scanf("%s",a);
    printf("Enter stringB:");
    scanf("%s",b);
    char c[n+m];
    int j=0;
    for(int i=0;i<n+m;i++)
    {
        if(j<n){
            c[i]=a[j];
            j+=1;
            continue;
        }
        c[i]=b[j-n];
        j+=1;
    }
    printf("%s",c);
    
}
