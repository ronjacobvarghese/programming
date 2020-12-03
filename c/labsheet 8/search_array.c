/*@
    requires n > 0;
    requires \valid_read(a + (0..n−1)) ;
    behavior not_found:
      assumes \forall integer i;
           0 <= i < n ==> a[i] != k;
    ensures \result == 0;
    behavior found:
      assumes \exists integer i;
           0 <= i < n && a[i] == k;
    ensures \result == 1;
    complete behaviors;
    disjoint behaviors;
*/

int Search_array(int a[], int n, int k)
{
/*@
  loop invariant 0 <= i <= n;
  loop invariant \forall integer j;
      0<= j < i ==> a[j]!=k;
  loop assigns i;
  loop variant n − i;
*/
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            return 1;
    }
    return 0;
}