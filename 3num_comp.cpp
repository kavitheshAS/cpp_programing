#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"enter the value of n1,n2,n3:";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3)
    {
        cout<<n1<<"is the greatest of the three integers";
    }
    else if(n2>n3 && n2>>n1)
    {
        cout<<n2<<"is the greatest of the three integers";
    }
    
    else if(n2==n1 && n2>n3)
    {
        cout<<"n1 and n2 are equal and are greater than n3";
    }
    else if(n2==n3 && n2>n1)
    {
        cout<<"n2 and n3 are equal and are greater than n1";
    }
    else if(n1==n3 && n1>n2)
    {
        cout<<"n1 and n3 are equal and are greater than n2";
    }
    else if(n2==n1 && n2<n3)
    {
        cout<<"n1 and n2 are equal and are lesser than n3";
    }
    else if(n2==n3 && n2<n1)
    {
        cout<<"n2 and n3 are equal and are lesser  than n1";
    }
    else if(n1==n3 && n1<n2)
    {
        cout<<"n1 and n3 are equal  and are lesser than n2";
    }
    else 
    {
        cout<<n3<<"is the greatest of the three integers";
    }
    return 0;
}