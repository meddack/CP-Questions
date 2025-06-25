#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count =0;
    int run = max(m,n);
    for(int a=0; a<=run; a++){
        for(int b=0; b<=run; b++){
            if((a*a + b == n) && (a + b*b == m)){
                count++;
            } 
        }
    }
    cout<<count;
}