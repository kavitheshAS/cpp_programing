#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    char op;
    cout<<"enter the value of n1:";
    cin>>n1;
    cout<<"enter the operator";
    cin>>op;
    cout<<"enter the value of n2:";
    cin>>n2;
    if(op=='+')
    {
        cout<<n1+n2;
    }
    else if(op=='*')
    {
        cout<<n1*n2;
    }
    else if(op=='/')
    {
        cout<<n1/n2;
    }
    else if(op=='-')
    {
        cout<<n1-n2;
    }
    else
    {
        cout<<"invalid operation";
    }

    return 0;
}