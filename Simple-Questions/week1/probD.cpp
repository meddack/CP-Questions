#include<iostream>
using namespace std;
int main()
{
    int x;
    
    while(1)
    {
        cin>>x;
        if(x>=10^3 && x<=10^4-1)
        {
            if(x==1999)
            {
                cout<<"Correct"<<endl;
                return 0;
            }
            else
        {
            cout<<"Wrong"<<endl;
        }
            
        }
       
    }
}