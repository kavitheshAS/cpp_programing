#include<iostream>
using namespace std;
int main()
{
    string color,pluralnoun,celeb;
    cout<<"enter a color:";
    getline(cin,color);
    cout<<"enter a pluralnoun";
    getline(cin,pluralnoun);
    cout<<"enter a celeb";
    getline(cin,celeb);
    cout<<"roses are "<<color<<endl;
    cout<<pluralnoun<<" are blue"<<endl;
    cout<<"i love "<<celeb<<endl;
    return 0;
}
