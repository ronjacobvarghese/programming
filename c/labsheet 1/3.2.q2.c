/*@
	requires \valid(a) && \valid(b);
	requires \separated(a,b);
	requires -10000000<*a<10000000 && -10000000<*b<10000000;
	ensures *b==> *a==0;
	ensures !*b==> *a==\old(*a);
*/
void reset_1st_if_2nd_is_true(int* a,int const* b){
	if(*b){ 
		*a =0;
		//@ assert *a==0;
	}
}
int main(){
	int a =5, x =0;
	reset_1st_if_2nd_is_true(&a, &x);
	//@ assert a == 5 ;
	//@ assert x == 0 ;
	int const b =1;
	reset_1st_if_2nd_is_true(&a, &b);
	//@ assert a == 0 ;
	//@ assert b == 1 ;
}
