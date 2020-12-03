/*@
requires n>0;
requires \valid_read(a+(0..n-1));
*/
int cumulative_sum(int a[],int n){
    int k=a[0];
/*@
loop invariant a[i]==k+a[i-1];
loop invariant 0<i<=n;
loop assigns i,k,a[0..n-1];
loop variant n-i;
*/
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        k=a[i];
    }
}

