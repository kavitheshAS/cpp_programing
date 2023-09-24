#include<iostream>
using namespace std;
string giveday(int daynum)
{
    string dayofweek;
    cout<<"enter the day number:";
    cin>>daynum;
    if(daynum==1)
    {
        dayofweek="monday";
        cout<<"its "<<dayofweek;
    }
    else if(daynum==2)
    {
        dayofweek="tuesday";
        cout<<"its "<<dayofweek;
    }
    else if(daynum==3)
    {
        dayofweek="wednesday";
        cout<<"its "<<dayofweek;
    }
    else if(daynum==4)
    {
        dayofweek="thursday";
        cout<<"its "<<dayofweek;
    }
    else if(daynum==5)
    {
        dayofweek="friday";
        cout<<"its "<<dayofweek;
    }
    else if(daynum==6)
    {
        dayofweek="saturday";
        cout<<"its "<<dayofweek;
    }
    else if(daynum==7)
    {
        dayofweek="sunday";
        cout<<"its "<<dayofweek;
    }
    else
    {
        cout<<"invalid entry";
    }
    return dayofweek;
}
int main()
{
    int daynum;
    giveday(daynum);
    return 0;
}