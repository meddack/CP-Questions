#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[3];
    int ans[3];
    
    for(int i=0;i<3;i++){
    cin>>arr[i];
    }
    
    for (int i = 0; i < 3; i++) {
        ans[i] = arr[i];
    }
    
    sort(arr, arr+3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
        for(int i=0;i<3;i++){
        cout<<ans[i]<<endl;
    }
    
}