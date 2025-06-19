#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int n;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        if(str == "++X" || str == "X++"){
            x++;
        }
        else if(str == "--X" || str == "X--"){
            x--;
        }
    }
    cout<<x;
}