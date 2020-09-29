#include<stdio.h>
struct over{
    int over_number;
    int balls_bowled;
    int wickets;
    int runs_scored;
};
/*@ requires (over>-1 && over<20) && runs>-1 && (balls<120 && balls>0) && wic>-1;
ensures a->runs_scored==\old(a->runs_scored)+runs;
ensures a->wickets==\old(a->wickets)+wic;
behavior one:
assumes balls%6==0;
ensures a->over_number==\old(a->over_number)+1;
behavior two:
assumes balls%6!=0;
ensures a->balls_bowled==\old(a->balls_bowled)+balls%6 ;
disjoint behaviors one,two;


*/
void update_over(struct over *a,int over,int balls,int wic,int runs){
    if(balls%6==0){
        a->over_number+=1;
    }
    if(balls%6!=0){
        a->balls_bowled+=(balls%6);
    }
    a->runs_scored+=runs;
    a->wickets+=wic;
}