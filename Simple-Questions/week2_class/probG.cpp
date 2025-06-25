#include <iostream>
using namespace std;
int main() {
     int t;
     cin >> t;
     
     while(t--){
        int n;
        cin >>n;
        int arr[n];
        int even =0;int odd =0;
            for(int i =0; i<n; i++){
                cin>>arr[i];
            }
            for(int i =0;i<n;i++){
                if(arr[i]%2 == 0){
                    even++;
                }
                else odd++;
            }
            
          if(n%2 != 0){
              cout<< -1<<endl;
          }
          else if(even == odd){
              cout<< 0 <<endl;
          }
          else {
              int ans = abs(even-odd);
              cout<< ans/2<<endl;
          }
              
        
     }

}
