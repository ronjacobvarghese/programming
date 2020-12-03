#include<stdio.h>
/*@
    requires 0<n<=100;
    requires \valid_read(a+(0..(n-1))

*/
int palindrome(int a[],int n){

    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            return 0;
        }
    }
    return 1;
}