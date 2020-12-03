/*@

*/
int sigma(int n){
    int s=0;
    int i=1;
    /*@

    */
    while(i<=n){
        s+=i;
        i++;
    }
    return s;
}
        loop invariant s== (i*(i-1))/2;
        loop invariant 0<=i<=n+1;
        loop assigns s,i;
        loop variant n-i;




        requires n>0;



        
ensures \result==n*(n+1)/2;