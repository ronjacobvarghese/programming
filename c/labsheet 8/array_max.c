/*@
  requires n > 0;
  requires \valid_read(a + (0..n−1));
  ensures \forall integer i;
      0 <= i < n ==> \result >= a[i];
*/
int Array_max(int a[], int n)
{
    int max = a[0];
/*@
  loop invariant \forall integer i;
      0 <= i < j ==> max >= a[i];
  loop invariant 1 <= j <= n;
  loop assigns j, max;
  loop variant n − j;
*/
    for (int j = 1; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
    }

    return max;
}