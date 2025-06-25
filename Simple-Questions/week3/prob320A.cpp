#include<bits/stdc++.h>
using namespace std;
 int main(){
    string str;
    cin>>str;
    bool ans = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == '1'){
            ans = 1;
        }
        else if(str[i]== '4' && str[i-1]== '1'){
            ans = 1;
        }
        else if(str[i] == '4' && str[i-1] == '4' && str[i-2]==  '1'){
            ans = 1;
        }
        else {
            ans = 0;
            cout<<"NO";
            return 0;
        }
 
    }
    if(ans == 0) cout<<"NO";
    else cout<<"YES";

 }