#include<iostream>
using namespace std;
int exponent(int a,int b)
{
    cout<<"enter the values of a,b such that a^b to be computed:";
    cin>>a>>b;
    int result=1;
    
    for(int i=1;i<=b;i++) 
    {
        result=result*a;
    }
    return result;
}
int main()
{
    int a,b;
    cout<<exponent(a,b);
    
    
}