/*@
requires n>1;
requires j==0;
behavior prime:
    assumes j==0;
    ensures \result==1;
behavior non_prime:
    assumes j==1;
    ensures \result==0;

*/

int prime(int n,int j){
/*@
loop invariant \forall integer k;
    2<=k<i ==> n%k!=0;
loop invariant 2<=i<=n/2;
loop assigns i,j;
loop variant n/2-i;
*/
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0){
            j=1;
        }
    }
    if(j==0){
        return 1;
    }
    else if(j==1){
        return 0;
    }
}