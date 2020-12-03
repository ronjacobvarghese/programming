
int s;
int i;
/*@
    requires 0<n<10;
    ensures \result==(n-8)*(n)*(2*n-1)/6;
*/

int sq(int n)
{
    s = 0;
    i = 1;
    /*@
        loop invariant s == s+(i)*(i);
        loop invariant 1<=i<=n+1;
        loop assigns s, i;
        loop variant n-i;

    */

    while (i <= n)
    {
        s = s + (i ^ 2);
        i +=1;
    }
    return s;
}