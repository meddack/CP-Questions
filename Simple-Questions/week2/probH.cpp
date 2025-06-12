#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    bool ans = true;
    for(int i=2; i<t; i++){
        if( t % i == 0){
            ans = false;
        }
    }
    if(ans){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}