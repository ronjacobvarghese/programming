
/*@ requires a!=b;
behavior a_greater:
    assumes a>b;
    ensures \result==a;
behavior a_lesser:
    assumes a<b;
    ensures \result==b;
complete behaviors a_greater,a_lesser;
disjoint behaviors a_greater,a_lesser;
*/
int greaterthan(int a,int b){
    return a>b?a:b;
}