#include <iostream>
#include <algorithm>
using namespace std;
    int main() {
    
    int n;
    cin >>n;
    
    while(n--){
        
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    
    int f =  max(arr[0],arr[1]);
    int s = max(arr[2],arr[3]);
    
    sort(arr,arr+4);
    
    int pt1 = arr[2];
    int pt2 = arr[3];
    
    if((pt1 == f || pt1 == s) &&(pt2 == f || pt2 == s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}