/*@
   requires n > 0;
   requires \valid_read(a + (0..n−1));
   behavior not_found:
      assumes \forall integer i;
         0 <= i < n ==> a[i] == i;
      ensures \result == 1;
   behavior found:
      assumes \exists integer i;
         0 <= i < n && a[i] != i;
      ensures \result == 0;
   complete behaviors;
   disjoint behaviors;
*/

int Same_index(int a[], int n)
{
/*@
    loop invariant \forall integer j;
          0 <= j < i ==> a[j] == j;
    loop invariant 0 <= i <= n;
    loop assigns i;
    loop variant n − i;
*/
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
            return 0;
    }
    return 1;
}