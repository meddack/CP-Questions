// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int maxVal = *max_element(arr, arr+n);
    int burdle = 0;
    
    for(int i=0; i<n; i++){
        int diff = maxVal - arr[i];
        burdle += diff;
    }
    
    cout<<burdle;   
    
    
}