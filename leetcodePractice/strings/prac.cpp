#include<iostream>
using namespace std;
int main(){
    int n=5;

    int arr[n]= {5,4,3,2,1};
    for(int i= 0; i<n-1; i++){
        for(int j= 0 ; j<n-i-1; j++){
            swap(arr[i],arr[j]);
        }
    }
    for(int i =0; i<n;i++){
        cout<<arr[i];
    }
}