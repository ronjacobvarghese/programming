#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int D[N];
    for(int i=0;i<N;i++)
    { 
        cin>>D[i];
    }
    int E[3]={0};
    //requires an array for greedy choice
    //to find the number of occurences of each number
    for(int i=0;i<N;i++)
    { 
        E[D[i]-1]+=1; //to find the number of occurences of each number
    }
    //selects the least value(which is the most possible no of times the teams can be grouped) 
    //to give it as output.
    cout<<*min_element(E,E+3);
}