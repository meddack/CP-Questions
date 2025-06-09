#include<iostream>
 
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    
    
    
    while(t--){
    long long m,n,ans,count;
    cin>>m>>n;
    if(m > n) swap(m, n);
    count = (n-m+1);
    ans = (long long)count *(m+n);
    cout<<ans/2<<endl;
    }
    
}