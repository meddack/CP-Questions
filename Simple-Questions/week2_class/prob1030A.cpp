// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int flag =0 ;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            flag =1;
        }
    }
    if(flag == 1){
        cout<<"HARD";
    }
    else cout<<"EASY";

}
	


