#include<iostream>
using namespace std;

int sum(int arr[], int n){
   
   // Base case : 
   if(n == 0){
       return 0;
   }
   if(n == 1){
       return arr[0];
   }

   int remainingPart = sum(arr + 1, n - 1);
   
   int total = arr[0] + remainingPart;

   return total;
}
int main(){
    
    int arr[5] = {2,3,4,5,7};
    
    int n = 5;

    int ans = sum(arr, n);

    cout << "Answer is : " << ans << endl;

    return 0;
}