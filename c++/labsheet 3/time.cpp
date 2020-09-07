#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    Time()
    {
        h=0;
        m=0;
        s=0;
    }

    Time(int h,int m,int s)
    {
        this->h=h%24;
        this->m=m%60;
        this->s=s%60;
    }

    int getHour()
    {
        return h;
    }

    int getMinute()
    {
        return m;
    }

    int getSecond()
    {
        return s;
    }

    void setHour(int h)
    {
        this->h=h%24;
    }

    void setMinute(int m)
    {
        this->m=m%60;
    }

    void setSecond(int s)
    {
        this->s=s%60;
    }

    void print()
    {
        if(h<10)
            cout<<"0"<<h<<":";
        else cout<<h<<":";

        if(m<10)
            cout<<"0"<<m<<":";
        else cout<<m<<":";

        if(s<10)
            cout<<"0"<<s;
        else
        cout<<s;

        cout<<endl;
    }

    void nextSecond()
    {
        s=(s+1)%60;
        if(s==0)
        {
            m=(m+1)%60;
            if(m==0)
                h=(h+1)%24;
        }
    }

    void setTime(int h,int m,int s)
    {
        this->h=h%24;
        this->m=m%60;
        this->s=s%60;
    }

};



int main()
{
    Time t1,t2(23,59,59);
    t1.print();
    t2.print();
    t1.nextSecond();
    t1.print();
    t2.nextSecond();
    t2.print();
    cout<<"t1 hour: "<<t1.getHour()<<endl;
    cout<<"t2 hour: "<<t2.getHour()<<endl;
    cout<<"t1 minute: "<<t1.getMinute()<<endl;
    cout<<"t2 minute: "<<t2.getMinute()<<endl;
    cout<<"t1 second: "<<t1.getSecond()<<endl;
    cout<<"t2 second: "<<t2.getSecond()<<endl;
    t1.setHour(24);
    t1.setMinute(56);
    t1.setSecond(59);
    t1.print();
    t1.setTime(9,59,59);
    t1.nextSecond();
    t1.print();
    return 0;
}