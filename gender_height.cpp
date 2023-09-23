#include<iostream>
using namespace std;
int main()
{
    
    bool ismale;
    cout<<"enter any non zero number for true and 0 for false.\n";
    cout<<"are you male:";
    cin>>ismale;
    bool istall;
    cout<<"are you tall:";
    cin>>istall;
    
    if(ismale && istall)
    {
        cout<<"is a tall male";
    }
    else if(ismale && !istall)
    {
        cout<<"is a short male";
    }
    else if(!ismale && istall)
    {
        cout<<"is tall but not male";
    }
    else
    {
        cout<<"is neither tall nor male";
        
    }
    return 0;
}




