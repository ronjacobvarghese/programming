/*@
    requires n>0;

    requires \valid(a + (0..n-1));
    ensures \forall integer i;
    0<= i<n ==>a[n-1]>= a[i];
*/
void q3(int a[],int n)
{
    int m=0;

/*@
    loop invariant \forall integer i;0<=i<j ==>a[m]>= a[i];
    loop invariant 0<=j<=n;
    loop assigns m,j;
    loop variant n-j;
*/
    for(int j=0; j<n; j++)
    {
        if(a[j] > a[m])
        {
            m = j;
        }
    }
    int t = a[n-1];
    a[n-1] = a[m];
    a[m] = t;

}