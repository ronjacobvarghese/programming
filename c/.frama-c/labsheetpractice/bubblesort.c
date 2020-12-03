/*@
requires n>0;
requires \valid_read(a+(0..n-1));
ensures \forall integer k;
    0<=k<n-1 ==> a[n-1]>=a[k];
*/
int sort(int a[],int n){
    int t=-1;
/*@
loop invariant \forall integer j;
    0<=j<i ==> a[i]>=a[j];
loop invariant 0<=i<=n-1;
loop assigns t,i,a[0..n];
loop variant n-1-i;
*/ 
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    return a[n-1];
}