/*@ 	requires a>0 && a<2147483647;
	ensures \result == \old(a)+1;
*/
int next(int a)
{
	return a+1;
}
