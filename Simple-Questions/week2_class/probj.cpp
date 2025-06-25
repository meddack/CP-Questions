
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;


    for(int i =2; i<=n; i++){  // range for checking 
        bool ans = true;

        
        for(int j =2; j*j <= i; j++){
            if(i%j == 0 ){
                ans = false;
            }
            
        }
        if(ans){
            cout<<i<<" " ;
        }
    }return 0;
}
