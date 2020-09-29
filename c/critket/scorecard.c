#include<stdio.h>

struct scorecard{
    int total_runs;
    int wickets;
    int total_overs;
    int over_complete;
    int target_score;
};
/*@
requires 0<=runs<1000 && 0<=wic<=10 && 0<=comp<=20;
ensures a->total_runs==\old(a->total_runs)+runs;
ensures a->wickets==\old(a->wickets)+wic;
ensures a->over_complete==\old(a->over_complete)+comp;
*/
void update_scorecard(struct scorecard *a,int runs, int wic,int comp){
    a->total_runs+=runs;
    a->wickets+=wic;
    a->over_complete+=comp;
}
