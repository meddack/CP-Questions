#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    for(int i=2; i<t; i++){
        if( t % i == 0){
            cout << i << "\n";
        }
    }
}