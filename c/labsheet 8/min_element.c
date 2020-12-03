/*@
  requires n > 0;
  requires \valid_read(a + (0..n−1));
  ensures \forall integer i;
      0 <= i < n ==> \result <= a[i];
*/
int Min_elements(int a[], int n)
{
    int min = a[0];
/*@
  loop invariant \forall integer i;
      0 <= i < j ==> min <= a[i];
  loop invariant 1 <= j <= n;
  loop assigns j, min;
  loop variant n − j;
*/
    for (int j = 1; j < n; j++)
    {
        if (a[j] < min)
            min = a[j];
    }

    return min;
}