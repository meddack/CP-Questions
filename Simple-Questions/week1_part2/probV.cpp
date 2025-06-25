#include <iostream>
using namespace std;

int main() {
    int a,b;
    string str;
    cin>>a>>str>>b;
    bool  in = false;
    if(str == ">"){
        if(a > b) in = 1;
    }
    else if(str == "<"){
        if(a < b) in = 1;
        
    }
    
    else if(str == "="){
        if(a == b) in = 1;

    }
    if(in==1){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
    
    
    
}
