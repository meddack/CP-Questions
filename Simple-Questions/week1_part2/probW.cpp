#include <iostream>
using namespace std;

int main() {
    int a,b,c,result;
    
    string str1,str2;
    
    cin >>a>>str1>>b>>str2>>c;
    bool correct = 0;
    
    if(str1 == "+"){
        result = a+b;
    }

    else if(str1 == "-"){
        result = a-b;
    }
        
    else if(str1 == "*"){
        result = a*b;
    }
    
    if(result  == c){
        cout<<"Yes";
    }
    else{
        cout<<result ;
    }
    
    

    return 0;
}
