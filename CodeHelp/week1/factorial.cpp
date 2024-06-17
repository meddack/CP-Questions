#include <iostream>
using namespace std;
int main()
{
    //find factorial of no.
    int a ;
    cout<<"enter a";
    cin>>a;
    int real= 1;

    if(a==0)
    {
        cout<<"1"<<endl;

    }
    else if(a<0)
    {
        cout<<"invalid"<<endl;

    }
    else
    {
        while(a>1)
        {
            real = real*a ;
            a--;
           
        }
         cout<<real;


    }
}