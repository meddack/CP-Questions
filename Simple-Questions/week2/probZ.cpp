#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long double left = b * logl(a); // bade constrains the 
    long double right = d * logl(c); // toh chota kra logl se and double- is imp 
				     // double ke bina dikkat aarhi thi
    
    if(left > right){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    
}