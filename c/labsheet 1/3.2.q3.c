/*@
	requires \valid(p) && \valid(q);
	requires -10000000<*p<10000000 && -10000000<*q<10000000;
	ensures \result==*p+*q;
*/
int add(int*p,int*q){
	return*p + *q ;
}
int main(){
	int a =24,b =42,x ;
	x = add(&a, &b) ;
	x = add(&a, &a) ;
}
