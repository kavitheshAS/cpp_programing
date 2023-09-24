#include<iostream>
using namespace std;
string giveday(int daynum)
{
 cout<<"enter the day number of the week:";
 cin>>daynum;
 string dayname;
 switch(daynum)
 {
  case 0:
  {
    string dayname="monday";
  }
  case 1:
  {
   string dayname="tuesday";
  }
  case 2:
  {
   string dayname="wednesday";
  }
  case 3:
  {
   string dayname="thursday";
  }
  case 4:
  {
   string dayname="friday";
  }
  case 5:
  {
   string dayname="saturday";
  }
  case 6:
  {
   string dayname="sunday";
  }
  default:
  {
  string dayname="invalid daynumber";
  }
  return 0;
}

int main()
{
 cout<<giveday(daynum);
 return 0;
}
