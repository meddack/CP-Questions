#include <iostream>
using namespace std;

int main() {
    int k;
    cin >>k;
    int a =21;
    if(k>=61 && k<=100){
        k = k-60;
        a = a+1;
    }
    
    if(k>=0 && k<=9){
        cout<<a<<":"<<"0"<<k;
    }
    else if(k<60 && k>9){
        cout<<a<<":"<<k;
    }
    else if(k==60){
        cout<<a+1<<":"<<"00";
    }


    return 0;
}

 271A cf beautiful year 
#include <iostream>
using namespace std;

int main() {
    int year;
    cin>>year;
    while(true){
        year+=1;
        int a=year/1000;
        int b=year/100 %10;
        int c=year/10 %10 ;
        int d=year%10;
        
        if(a!=b && a!=c && a!=d && b!=c &&  b!=d && c!=d){
            break;
        }
    }
    cout<<year;
}

