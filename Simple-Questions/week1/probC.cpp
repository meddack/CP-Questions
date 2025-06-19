// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    int ps=0;
    int neg=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even = even+1;
        }
        if(arr[i]>0)ps++;
        else neg++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<n-even<<endl;
    cout<<"Positive: "<<ps <<endl;
    cout << "Negative: " << neg ;
}